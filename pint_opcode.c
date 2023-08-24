#include "monty.h"

/**
 * pint - Printing the value at the top of the stack.
 * @stack: Pointer to the stack.
 * @line_number: The line number where the pint function is called.
 */

void pint(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", line_number);
		free_all_arguments();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", arguments->head->n);
}
