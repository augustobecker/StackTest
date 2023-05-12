#include <fcntl.h>
#include "minunit.h"

#include "function_test.c"


int main(void) 
{
	MU_RUN_SUITE(function_1_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}