#include "monty.h"

/**
 * op_mul - Multiplies the second top element by the top
 * element in the stack
 * @stack: stack_t
 * @line_number: int
 *
 * Return: void
 */
void op_mul(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *top;
	stack_t *second;

	if (stack == NULL)
		return;
	top = (*stack);
	second = top->next;
	second->n = second->n * top->n;
	second->prev = NULL;
	free(top);
	(*stack) = second;
}
