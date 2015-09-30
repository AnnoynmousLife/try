#include "unity.h"
#include "try.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_module_generator_needs_to_be_implemented(void)
{
	TEST_ASSERT_EQUAL(300, try_call());
	TEST_ASSERT_EQUAL(300, try_call());
	TEST_ASSERT_EQUAL(300, try_call());
	TEST_ASSERT_EQUAL(300, try_call());
	TEST_ASSERT_EQUAL(300, try_call());
}
