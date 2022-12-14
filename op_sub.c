#include "monty.h"

/**
 * op_sub - Subtracts the last two items in the stack.
 * @stack: stack_t
 * @line_number: int
 *
 * Description: The result is stored in the second top element of
 * the stack, and the top element is removed, so that at the end:
 * The top element of the stack contains the result
 * The stack is one element shorter
 * Return: void
 */
void op_sub(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *head;
	stack_t *node;

	if (stack == NULL)
		return;
	head = (*stack);
	node = head->next;
	node->n = node->n - head->n;
	node->prev = NULL;
	free(head);
	(*stack) = node;
}
