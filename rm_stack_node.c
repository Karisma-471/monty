#include "monty.h"

/**
* delete_stack_node - delete node at the head/top
*/
void delete_stack_node(void)
{
	stack_t *node;

	node = arguments->head;
	arguments->head = node->next;
	free(node);
}
