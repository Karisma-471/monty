#include "monty.h"

/**
 * invalid_instruction - Handles an unknown instruction error.
 */

void invalid_instruction(void)
{
	dprintf(2, "L%d: unknown instruction %s\n",
			arguments->line_number, arguments->tokens[0]);
	free_all_arguments();
	exit(EXIT_FAILURE);
}

/**
 * to_get_instruction - Sets the instruction based on the first token
 * in the input line.
 */

void to_get_instruction(void)
{
	int i = 0;
	instruction_t instructions[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add},
		{"pall", &pall}, {"sub", &sub},
		{"div", &_div}, {"mul", &mul},
		{"rotl", &rotl}, {"rotr", &rotr},
		{"stack", &stack}, {"queue", &queue},
		{"pstr", &pstr}, {"pchar", &pchar},
		{"mod", &mod},
		{NULL, NULL}
	};

	if (arguments->n_tokens == 0)
		return;
	if (arguments->tokens[0][0] == '#')
	{
		arguments->instruction->opcode = "nop";
		arguments->instruction->f = nop;
		return;
	}

	while (instructions[i].opcode != NULL)
	{

		if (strcmp(instructions[i].opcode, arguments->tokens[0])
				== 0)
		{
			arguments->instruction->opcode = instructions[i].opcode;
			arguments->instruction->f = instructions[i].f;
			return;
		}
		i++;
	}
	invalid_instruction();
}
