# Archive all source code to enable link-time substitution during tests
lib_LTLIBRARIES = libsrc.la

libsrc_la_SOURCES = module.c
libsrc_la_CPPFLAGS = -I$(top_srcdir)/include
if COMPILE_TESTS
libsrc_la_CFLAGS = -Wall -include CppUTest/MemoryLeakDetectorMallocMacros.h
endif
