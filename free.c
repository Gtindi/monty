#include "monty.h"

/**
 * free_parsed - Frees parsed data
 * @head: Head of the list
 */
void free_parsed(parser_t *head)
{
	parser_t *node, *temp;

	node = head;
	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
}

/**
 * free_stack - Frees stack data
 * @head: Head of the list
 */
void free_stack(stack_t *head)
{
	stack_t *node, *temp;

	node = head;
	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
}
