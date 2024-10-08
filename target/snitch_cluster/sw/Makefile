# Copyright 2023 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Luca Colagrande <colluca@iis.ee.ethz.ch>

TARGET ?= all
SELECT_RUNTIME ?= rtl-generic

ifeq ($(SELECT_RUNTIME), banshee)
RUNTIME = runtime/banshee
else ifeq ($(SELECT_RUNTIME), rtl)
RUNTIME = runtime/rtl
else
RUNTIME = runtime/rtl-generic
endif

SUBDIRS += math $(RUNTIME) snax/mac snax/data-reshuffler snax/streamer-gemm-conv-simd snax/xdma snax/hypercorex apps tests

.PHONY: all $(SUBDIRS)

all: $(SUBDIRS)

# Explicit dependency of apps on runtime
apps: math $(RUNTIME) snax/mac snax/data-reshuffler snax/streamer-gemm-conv-simd snax/xdma snax/hypercorex
	$(MAKE) -C $@ TARGET=$(TARGET)

# Explicit dependency of tests on runtime
tests: math $(RUNTIME) snax/mac snax/data-reshuffler snax/streamer-gemm-conv-simd snax/xdma snax/hypercorex
	$(MAKE) -C $@ $(TARGET)

runtime/rtl runtime/banshee runtime/rtl-generic math snax/mac snax/data-reshuffler snax/streamer-gemm-conv-simd snax/xdma snax/hypercorex:
	$(MAKE) -C $@ $(TARGET)
