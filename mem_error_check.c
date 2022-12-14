#include "monty.h"

/**
 * mem_error_check - Checks if memory error occured
 * @data: An allocated memory
 */
void mem_error_check(void *data)
{
	if (data == NULL)
	{
		print_errors(1, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}
