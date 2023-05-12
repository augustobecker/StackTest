#include "minunit.h"
#include "../includes/{{program_name}}.h"

MU_TEST(test_function_1_case_1)
{
	// ARRANGE
	int expected_result = 0;
	char actual_result = 1;

	// ACT

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(function_1_test_suite) 
{
	MU_RUN_TEST(test_function_1_case_1);
}