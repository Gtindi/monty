#include "monty.h"

/**
 * op_queue - Changes the mode to queue (1) and rotates
 * the stack whereby the top element is bottom
 * @stack: stack_t
 * @line_number: int
 *
 * Return: void
 */
void op_queue(stack_t **stack, unsigned int line_number
			  __attribute__((unused)))
{
	if (stack == NULL || mode == 1)
		return;
	mode = 1;
}
