#include "monty.h"

/**
 * op_add - Adds the last two items in the stack and remove them,
 * Then add the result to the stack
 * @stack: stack_t
 * @line_number: int
 *
 * Return: void
 */
void op_add(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *head;
	stack_t *node;
	stack_t *new_node;

	if (stack == NULL)
		return;
	new_node = malloc(sizeof(stack_t));
	mem_error_check(new_node);
	head = (*stack);
	node = head->next;
	new_node->n = head->n + node->n;
	new_node->prev = NULL;
	new_node->next = node->next;
	free(head);
	free(node);
	(*stack) = new_node;
}
