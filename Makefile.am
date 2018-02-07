ACLOCAL_AMFLAGS = -I m4

SUBDIRS = src
if COMPILE_TESTS
# Compile source code library tests only.
# Products can't currently be compiled - CppUTest malloc macros are undefined
# because the products don't link against CppUTest.
SUBDIRS += tests
else
# Compile products only
# There should be no reference to the unit test framework.
SUBDIRS += products/print_42 products/print_43
endif
