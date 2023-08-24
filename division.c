#include "monty.h"

/**
 * _div - Divides the second top element of the stack by the top element.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the _div function is called.
 */

void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	UNUSED(stack);
	if (arguments->stack_len < 2)
	{
		dprintf(2, "L%d: can't div, stack too short\n", line_number);
		free_all_arguments();
		exit(EXIT_FAILURE);
	}

	if (arguments->head->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", line_number);
		free_all_arguments();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguments->head;
	tmp2 = tmp1->next;

	tmp2->n = tmp2->n / tmp1->n;
	delete_stack_node();

	arguments->stack_len -= 1;
}
