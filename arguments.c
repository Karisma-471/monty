#include "monty.h"

/**
 * arguments_init - this function Initializes a pointer to
 * struct bus_s.
 * @arguments: arguments
 */
void arguments_init()
{
	arguments = malloc(sizeof(bus_t));
	if (arguments == NULL)
		malloc_failed();

	arguments->instruction = malloc(sizeof(instruction_t));
	if (arguments->instruction == NULL)
		malloc_failed();

	arguments->file = NULL;
	arguments->head = NULL;
	arguments->comment = NULL;
	arguments->n_tokens = 0;
	arguments->line_number = 0;
	arguments->stack_len = 0;
	arguments->stack = 1;
}
