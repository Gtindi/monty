#include "monty.h"

/**
 * op_push - Pushes an item to top of the stack
 * @stack: stack_t
 * @line_number: int
 *
 * Return: void
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	stack_t *head, *tail;

	node = malloc(sizeof(stack_t));
	mem_error_check(node);
	node->n = line_number;
	node->next = NULL;
	node->prev = NULL;
	if ((*stack) != NULL)
	{
		head = (*stack);
		tail = (*stack);

		/* stack */
		if (mode == 0)
		{
			node->next = head;
			head->prev = node;
		}

		/* queue */
		if (mode == 1)
		{
			while (tail->next != NULL)
				tail = tail->next;
			tail->next = node;
			node->prev = tail;
			node = head;
		}
	}
	(*stack) = node;
}
