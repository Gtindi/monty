#include "monty.h"

/**
 * op_pint - Pushes an item to top of the stack
 * @stack: stack_t
 * @line_number: int
 *
 * Return: void
 */
void op_pint(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	if (stack == NULL)
		return;

	printf("%d\n", (*stack)->n);
}
