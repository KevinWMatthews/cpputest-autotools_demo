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

AC_ARG_ENABLE(tests,
    [AS_HELP_STRING([--enable-tests], [Compile unit tests under CppUTest framework (default=no])],
    [tests=${enableval}],
    [tests=no]
)
AM_CONDITIONAL(COMPILE_TESTS, test "x$tests" = "xyes")

if test "x$tests" = "xyes"; then
    AC_LANG_PUSH([C++])
    AC_CHECK_HEADERS([CppUTest/TestHarness.h],
       ,
       [AC_MSG_ERROR([CppUTest headers not found!])]
    )
    AC_LANG_POP([C++])
fi

#TODO CppUTest is currently installed on my system.
# If CppUTest is installed in a custom directory, the user needs to be able to specify this.
# I'd like to do this using CPPUTEST_HOME, but I don't know how to force the header check to search there.

# AC_ARG_VAR(CPPUTEST_HOME, [Installation directory of unit test framework CppUTest])
# Access this in Makefile.am's using @CPPUTEST_HOME@
#
# I wonder if using --prefix=/path/to/install and a share/config.site in the installation directory will work.

# We could also force the user to specify CppUTest's installation directory:
# AS_IF([test "x$CPPUTEST_HOME" == x],
      # [AC_MSG_ERROR([Must specify CppUTest installation directory using CPPUTEST_HOME])],
      # [AC_MSG_NOTICE([CPPUTEST_HOME specified: $CPPUTEST_HOME])]
# )

AC_CONFIG_FILES([Makefile
                 src/Makefile
                 products/print_42/Makefile
                 products/print_43/Makefile
                 tests/Makefile])
AC_OUTPUT
