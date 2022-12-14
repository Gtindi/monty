#include "monty.h"

/**
 * op_stack - Changes the mode to stack (0) and rotates
 * the stack whereby the top element is bottom
 * @stack: stack_t
 * @line_number: int
 *
 * Return: void
 */
void op_stack(stack_t **stack, unsigned int line_number
			  __attribute__((unused)))
{
	if (stack == NULL || mode == 0)
		return;
	mode = 0;
}
