#include "monty.h"

/**
 * sub - Subtracting the top element of the stack from the second top element.
 * @stack: Pointer to the stack.
 * @line_number: The line number where the sub function is called.
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	UNUSED(stack);
	if (arguments->stack_len < 2)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", line_number);
		free_all_arguments();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguments->head;
	tmp2 = arguments->head->next;

	tmp2->n = tmp2->n - tmp1->n;
	delete_stack_node();

	arguments->stack_len -= 1;
}
