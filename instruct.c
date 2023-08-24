#include "monty.h"

/**
 * to_run_instruction - Runs the instruction specified by the arguments.
 */

void to_run_instruction(void)
{
	stack_t *stack = NULL;

	if (arguments->n_tokens != 0)
		arguments->instruction->f(&stack, arguments->line_number);
}
