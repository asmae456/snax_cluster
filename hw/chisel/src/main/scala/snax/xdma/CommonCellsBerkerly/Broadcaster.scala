// See LICENSE.SiFive for license details.
// See LICENSE.Berkeley for license details.

package snax.xdma.CommonCells

import chisel3._
import chisel3.util._

/** Takes in data on one decoupled interface and broadcasts it
  * to N decoupled output interfaces.
  */
class Broadcaster[T <: Data](typ: T, n: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(typ))
    val out = Vec(n, Decoupled(typ))
  })

  require(n > 0)

  if (n == 1) {
    io.out.head <> io.in
  } else {
    val idx = RegInit(0.U(log2Up(n).W))
    val save = Reg(typ)

    io.out.head.valid := idx === 0.U && io.in.valid
    io.out.head.bits := io.in.bits
    for (i <- 1 until n) {
      io.out(i).valid := idx === i.U
      io.out(i).bits := save
    }
    io.in.ready := io.out.head.ready && idx === 0.U

    when(io.in.fire) { save := io.in.bits }

    when(io.out(idx).fire) {
      when(idx === (n - 1).U) { idx := 0.U }.otherwise { idx := idx + 1.U }
    }
  }
}

/** Takes in data on one decoupled interface and broadcasts it
  * to N decoupled output interfaces.
  * Be aware that this module only controls the handshaking signals and does not buffer the data, so the data provider should remain unchanged until the ready signal is pulled high.
  */
class Broadcaster_OnlyControl(n: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(Bits(0.W)))
    val out = Vec(n, Decoupled(Bits(0.W)))
  })

  val s_idle :: s_waitAck :: s_Acked :: Nil = Enum(3)

  val states = for (i <- io.out) yield {

    // The state machine for each output
    val state = RegInit(s_idle)
    i.valid := false.B
    switch(state) {
      is(s_idle) {
        when(io.in.valid) { state := s_waitAck }
      }

      is(s_waitAck) {
        i.valid := true.B
        when(i.fire) { state := s_Acked }
      }

      is(s_Acked) {
        when(io.in.fire) { state := s_idle }
      }
    }

    // The bits signal is unimportant as it will be trimmed away later
    i.bits := DontCare

    // Collect the state value for later use
    state
  }

  io.in.ready := Mux(states.map(_ === s_Acked).reduce(_ & _), true.B, false.B)
}

object Broadcaster {
  def apply[T <: Data](in: DecoupledIO[T], n: Int): Vec[DecoupledIO[T]] = {
    val split = Module(new Broadcaster(in.bits, n))
    split.io.in <> in
    split.io.out
  }
}
