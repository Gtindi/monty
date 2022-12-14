#include "monty.h"

/**
 * can_div - Checks if div operation can be done
 * @op_code: string
 * @stack: stack_t
 * @lineno: int
 *
 * Return: int
 */
int can_div(char *op_code, stack_t **stack, int lineno)
{
	if (strcmp(op_code, "div") == 0)
	{
		if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
		{
			print_errors(3, "L", _itoa(lineno), ": can't div, stack too short\n");
			exit(EXIT_FAILURE);
		}

		if ((*stack)->n == 0)
		{
			print_errors(3, "L", _itoa(lineno), ": division by zero\n");
			exit(EXIT_FAILURE);
		}
		return (1);
	}
	return (0);
}
