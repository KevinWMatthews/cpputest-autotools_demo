extern "C"
{
#include "module.h"
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(module)
{
};

TEST(module, return_42)
{
    LONGS_EQUAL( 42, return_42() );
}

TEST(module, return_43)
{
    LONGS_EQUAL( 43, return_43() );
}

TEST(module, leaky_function)
{
    has_memory_leak(1);
}
