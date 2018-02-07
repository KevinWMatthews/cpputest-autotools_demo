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

AC_CONFIG_FILES([Makefile
                 src/Makefile
                 products/Makefile
                 tests/Makefile])
AC_OUTPUT
