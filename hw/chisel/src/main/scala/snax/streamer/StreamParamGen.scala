// Copyright 2024 KU Leuven.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51


package snax.streamer

import snax.csr_manager._

import snax.utils._

import chisel3._
import chisel3.util._

/*
  * Parameter definitions
  * fifoWidthReader - FIFO width for the data readers
  * fifoDepthReader - FIFO depth for the data readers fifoWidthWriter - FIFO
  * width for the data writers fifoDepthWriter - FIFO depth for the data writers
  * dataReaderNum - number of data readers dataWriterNum - number of data
  * writers dataReaderTcdmPorts - the number of connections to TCDM ports for
  * each data reader dataWriterTcdmPorts - the number of connections to TCDM
  * ports for each data writer readElementWidth - single data element width for
  * each data reader, useful for generating unrolling addresses
  * writeElementWidth - single data element width for each data writer, useful
  * for generating unrolling addresses tcdmDataWidth - data width for each TCDm
  * port spatialBoundsReader - spatial unrolling factors (your parfor) for
  * each data reader spatialBoundsWriter - spatial unrolling factors (your
  * parfor) for each data writer temporalLoopDim - the dimension of the temporal
  * loop temporalLoopBoundWidth - the register width for storing the temporal
  * loop bound addrWidth - the address width stationarity - accelerator
  * stationarity feature for each data mover (data reader and data writer)
*/


// Streamer parameters
object StreamerParametersGen extends CommonParams {

  def addrWidth = 17

  def temporalAddrGenUnitParams: Seq[TemporalAddrGenUnitParams] =
  Seq(
    TemporalAddrGenUnitParams(
      loopDim = 1,
      loopBoundWidth = 32,
      addrWidth
    )
  )

  def fifoReaderParams: Seq[FIFOParams] = Seq(
    FIFOParams(512,8)
  )

  def fifoWriterParams: Seq[FIFOParams] = Seq(
    FIFOParams(512,8)
  )

  def fifoReaderWriterParams: Seq[FIFOParams] = Seq()

  def dataReaderParams: Seq[DataMoverParams] = Seq(
    DataMoverParams(
      tcdmPortsNum = 8,
      addrWidth,
      spatialBounds = Seq(8),
      spatialDim = 1,
      elementWidth = 64,
      fifoWidth = fifoReaderParams(0).width
    )
  )

  def dataWriterParams: Seq[DataMoverParams] = Seq(
    DataMoverParams(
      tcdmPortsNum = 8,
      addrWidth,
      spatialBounds = Seq(8),
      spatialDim = 1,
      elementWidth = 64,
      fifoWidth = fifoWriterParams(0).width
    )
  )

  def dataReaderWriterParams: Seq[DataMoverParams] = Seq()

  def stationarity = Seq(0, 0, 0)

  def ifShareTempAddrGenLoopBounds = true

}

object StreamerTopGen {
  def main(args: Array[String]) : Unit = {
    val outPath = args.headOption.getOrElse("../../target/snitch_cluster/generated/.")
    emitVerilog(
      new StreamerTop(
        StreamerParams(
          temporalAddrGenUnitParams =
            StreamerParametersGen.temporalAddrGenUnitParams,
          fifoReaderParams = StreamerParametersGen.fifoReaderParams,
          fifoWriterParams = StreamerParametersGen.fifoWriterParams,
          fifoReaderWriterParams = StreamerParametersGen.fifoReaderWriterParams,
          dataReaderParams = StreamerParametersGen.dataReaderParams,
          dataWriterParams = StreamerParametersGen.dataWriterParams,
          dataReaderWriterParams = StreamerParametersGen.dataReaderWriterParams,
          addrWidth = StreamerParametersGen.addrWidth,
          stationarity = StreamerParametersGen.stationarity,
          ifShareTempAddrGenLoopBounds = StreamerParametersGen.ifShareTempAddrGenLoopBounds,
          tagName = "snax_dream_streamer_"
        )
      ),
      Array("--target-dir", outPath)
    )
  }
}
