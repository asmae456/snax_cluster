# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtestharness.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtestharness \
	Vtestharness___024root__DepSet_hbc650c6c__0 \
	Vtestharness___024root__DepSet_hbc650c6c__1 \
	Vtestharness___024root__DepSet_hbc650c6c__2 \
	Vtestharness___024root__DepSet_hbc650c6c__3 \
	Vtestharness___024root__DepSet_hbc650c6c__4 \
	Vtestharness___024root__DepSet_hbc650c6c__5 \
	Vtestharness___024root__DepSet_hbc650c6c__6 \
	Vtestharness___024root__DepSet_hbc650c6c__7 \
	Vtestharness___024root__DepSet_hbc650c6c__8 \
	Vtestharness___024root__DepSet_hbc650c6c__9 \
	Vtestharness___024root__DepSet_hbc650c6c__10 \
	Vtestharness___024root__DepSet_hbc650c6c__11 \
	Vtestharness___024root__DepSet_h3e9cff1f__0 \
	Vtestharness___024root__DepSet_h3e9cff1f__1 \
	Vtestharness___024root__DepSet_h3e9cff1f__2 \
	Vtestharness___024root__DepSet_h3e9cff1f__3 \
	Vtestharness___024root__DepSet_h3e9cff1f__4 \
	Vtestharness___024root__DepSet_h3e9cff1f__5 \
	Vtestharness___024root__DepSet_h3e9cff1f__6 \
	Vtestharness___024root__DepSet_h3e9cff1f__7 \
	Vtestharness___024root__DepSet_h3e9cff1f__8 \
	Vtestharness___024root__DepSet_h3e9cff1f__9 \
	Vtestharness___024root__DepSet_h3e9cff1f__10 \
	Vtestharness___024root__DepSet_h3e9cff1f__11 \
	Vtestharness___024root__DepSet_h3e9cff1f__12 \
	Vtestharness___024root__DepSet_h3e9cff1f__13 \
	Vtestharness_snitch_amo_shim__A9_D40_C1__DepSet_h7c2397aa__0 \
	Vtestharness_snitch_amo_shim__A9_D40_C1__DepSet_h7c2397aa__1 \
	Vtestharness_REG_BUS__A30_D40__DepSet_h9b8387fd__0 \
	Vtestharness_REG_BUS__A30_D200__DepSet_h9af89066__0 \
	Vtestharness_axi_mux__pi51__DepSet_h2cb74312__0 \
	Vtestharness_axi_mux__pi51__DepSet_hce4eafd9__0 \
	Vtestharness_axi_to_mem__pi54__DepSet_h2fc044c8__0 \
	Vtestharness_axi_to_mem__pi54__DepSet_h2fc044c8__1 \
	Vtestharness_axi_mux__pi69__DepSet_hd37fc0f0__0 \
	Vtestharness_axi_mux__pi69__DepSet_h699633bb__0 \
	Vtestharness_axi_demux__pi48__DepSet_h66fbee3a__0 \
	Vtestharness_axi_demux__pi48__DepSet_h66fbee3a__1 \
	Vtestharness_axi_demux__pi48__DepSet_h14121cf1__0 \
	Vtestharness_axi_demux__pi66__DepSet_h7b04b73c__0 \
	Vtestharness_axi_demux__pi66__DepSet_h01fb43ef__0 \
	Vtestharness_axi_err_slv__pi67__DepSet_h9a2f7751__0 \
	Vtestharness_tc_sram_impl__pi55__DepSet_he5c22454__0 \
	Vtestharness_axi_burst_splitter_counters__pi151__DepSet_h074b8b58__0 \
	Vtestharness_axi_burst_splitter_counters__pi151__DepSet_h074b8b58__1 \
	Vtestharness_axi_burst_splitter_counters__pi151__DepSet_hb5c27813__0 \
	Vtestharness_axi_burst_splitter_counters__pi153__DepSet_h4b9ae816__0 \
	Vtestharness_axi_burst_splitter_counters__pi153__DepSet_h4b9ae816__1 \
	Vtestharness_axi_burst_splitter_counters__pi153__DepSet_hf1711ad5__0 \
	Vtestharness_rr_arb_tree__pi116__DepSet_h4cdd9eed__0 \
	Vtestharness_rr_arb_tree__pi116__DepSet_h4cdd9eed__1 \
	Vtestharness_rr_arb_tree__pi116__DepSet_h4cdd9eed__2 \
	Vtestharness_rr_arb_tree__pi116__DepSet_hee346da0__0 \
	Vtestharness_axi_demux_id_counters__pi166__DepSet_h77441614__0 \
	Vtestharness_axi_demux_id_counters__pi167__DepSet_ha98950e0__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtestharness__ConstPool_0 \
	Vtestharness___024root__Slow \
	Vtestharness___024root__DepSet_hbc650c6c__0__Slow \
	Vtestharness___024root__DepSet_hbc650c6c__1__Slow \
	Vtestharness___024root__DepSet_hbc650c6c__2__Slow \
	Vtestharness___024root__DepSet_h3e9cff1f__0__Slow \
	Vtestharness___024root__DepSet_h3e9cff1f__1__Slow \
	Vtestharness___024root__DepSet_h3e9cff1f__2__Slow \
	Vtestharness___024unit__Slow \
	Vtestharness___024unit__DepSet_h32825d4c__0__Slow \
	Vtestharness_snax_dream_cluster_pkg__Slow \
	Vtestharness_snax_dream_cluster_pkg__DepSet_h97501294__0__Slow \
	Vtestharness_idma_reg64_frontend_reg_pkg__Slow \
	Vtestharness_idma_reg64_frontend_reg_pkg__DepSet_hd00c985c__0__Slow \
	Vtestharness_snitch_amo_shim__A9_D40_C1__Slow \
	Vtestharness_snitch_amo_shim__A9_D40_C1__DepSet_h7c2397aa__0__Slow \
	Vtestharness_snitch_amo_shim__A9_D40_C1__DepSet_hfeda6461__0__Slow \
	Vtestharness_REG_BUS__A30_D40__Slow \
	Vtestharness_REG_BUS__A30_D40__DepSet_h9b8387fd__0__Slow \
	Vtestharness_REG_BUS__A30_D200__Slow \
	Vtestharness_REG_BUS__A30_D200__DepSet_h9af89066__0__Slow \
	Vtestharness_axi_mux__pi51__Slow \
	Vtestharness_axi_mux__pi51__DepSet_hce4eafd9__0__Slow \
	Vtestharness_axi_to_mem__pi54__Slow \
	Vtestharness_axi_to_mem__pi54__DepSet_h2fc044c8__0__Slow \
	Vtestharness_axi_to_mem__pi54__DepSet_hcd37b783__0__Slow \
	Vtestharness_axi_mux__pi69__Slow \
	Vtestharness_axi_mux__pi69__DepSet_h699633bb__0__Slow \
	Vtestharness_axi_demux__pi48__Slow \
	Vtestharness_axi_demux__pi48__DepSet_h14121cf1__0__Slow \
	Vtestharness_axi_demux__pi66__Slow \
	Vtestharness_axi_demux__pi66__DepSet_h01fb43ef__0__Slow \
	Vtestharness_axi_err_slv__pi67__Slow \
	Vtestharness_axi_err_slv__pi67__DepSet_h20e6841c__0__Slow \
	Vtestharness_tc_sram_impl__pi55__Slow \
	Vtestharness_tc_sram_impl__pi55__DepSet_h9739d717__0__Slow \
	Vtestharness_axi_burst_splitter_counters__pi151__Slow \
	Vtestharness_axi_burst_splitter_counters__pi151__DepSet_hb5c27813__0__Slow \
	Vtestharness_axi_burst_splitter_counters__pi153__Slow \
	Vtestharness_axi_burst_splitter_counters__pi153__DepSet_hf1711ad5__0__Slow \
	Vtestharness_rr_arb_tree__pi116__Slow \
	Vtestharness_rr_arb_tree__pi116__DepSet_hee346da0__0__Slow \
	Vtestharness_axi_demux_id_counters__pi166__Slow \
	Vtestharness_axi_demux_id_counters__pi166__DepSet_h05bbe4d7__0__Slow \
	Vtestharness_axi_demux_id_counters__pi167__Slow \
	Vtestharness_axi_demux_id_counters__pi167__DepSet_ha98950e0__0__Slow \
	Vtestharness_axi_demux_id_counters__pi167__DepSet_h5380a3ab__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtestharness__Dpi \
	Vtestharness__Trace__0 \
	Vtestharness__Trace__1 \
	Vtestharness__Trace__2 \
	Vtestharness__Trace__3 \
	Vtestharness__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtestharness__Syms \
	Vtestharness__Trace__0__Slow \
	Vtestharness__TraceDecls__0__Slow \
	Vtestharness__Trace__1__Slow \
	Vtestharness__Trace__2__Slow \
	Vtestharness__Trace__3__Slow \
	Vtestharness__Trace__4__Slow \
	Vtestharness__Trace__5__Slow \
	Vtestharness__Trace__6__Slow \
	Vtestharness__Trace__7__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
