bin_PROGRAMS = test_src
test_src_SOURCES = RunAllTests.cpp \
				   Test_Module.cpp

# The pkgconfig file has:
# 	 -lstdc++ -lCppUTest -lCppUTestExt
test_src_LDADD = $(top_builddir)/src/libsrc.la -lCppUTest
test_src_CPPFLAGS = -I$(top_srcdir)/include
