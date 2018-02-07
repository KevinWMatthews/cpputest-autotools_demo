AC_PREREQ([2.69])

AC_INIT([cpputest_autotools_demo], [1.0.0], [kevinwmatthews@gmail.com])
AC_CONFIG_SRCDIR([src/module.c])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([foreign])
AM_SILENT_RULES([yes])

LT_PREREQ([2.2])
LT_INIT([dlopen])

AC_PROG_CC
AC_PROG_CXX
AC_PROG_INSTALL

# AC_SUBST(CPPUTEST_HOME, [/usr/local])
AC_ARG_VAR(CPPUTEST_HOME, [Installation directory of unit test framework CppUTest])
# we coud use AS_IF to see if CPPUTEST_HOME has been set.
# We really should implement a header file check. We could use failure in this test to notify the user what to do.
# It is possible to use automake to do the checking:
#   configure.ac
#       AM_CONDITIONAL([ENABLE_SOURCECODEPATH], [test "x$ac_srcpath" != "x"])
#   Makefile.am
#       if !ENABLE_SOURCECODEPATH
#       SOURCECODEPATH = ...
#       endif
# Will this catch the error at configure time?
# It may also be possible to use :=

AC_CONFIG_FILES([Makefile
                 src/Makefile
                 products/print_42/Makefile
                 products/print_43/Makefile
                 tests/Makefile])
AC_OUTPUT
