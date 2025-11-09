# Makefile for BBC Baseball on UNIVAC
# Targets RISC-V emulator running on UNIVAC
PROGRAM = baseball
EXTRA_CFLAGS = -Os -DUNIVAC
SRCS = baseball.c players.c
include ../../toolchain/common.mk
