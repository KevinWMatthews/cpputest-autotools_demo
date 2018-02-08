bin_PROGRAMS = test_src
test_src_SOURCES = RunAllTests.cpp \
				   Test_Module.cpp

# The pkgconfig file has:
# 	 -lstdc++ -lCppUTest -lCppUTestExt
test_src_LDADD = $(top_builddir)/src/libsrc.la -lCppUTest
test_src_CPPFLAGS = -I$(top_srcdir)/include
# CppUTest documentation states that you should use this, but I can't seem to find the effect.
# Explicitly including this does seem to pull in definitions of size_t, for example.
test_src_CXXFLAGS = -include CppUTest/MemoryLeakDetectorNewMacros.h
