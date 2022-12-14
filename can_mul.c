#include "monty.h"

/**
 * can_mul - Checks if mul operation can be done
 * @op_code: string
 * @stack: stack_t
 * @lineno: int
 *
 * Return: int
 */
int can_mul(char *op_code, stack_t **stack, int lineno)
{
	if (strcmp(op_code, "mul") == 0)
	{
		if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
		{
			print_errors(3, "L", _itoa(lineno), ": can't mul, stack too short\n");
			exit(EXIT_FAILURE);
		}
		return (1);
	}
	return (0);
}
