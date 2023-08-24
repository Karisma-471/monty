#include "monty.h"

/**
 * free_all_arguments - Frees all allocated memory for arguments.
 */

void free_all_arguments(void)
{
	close_file();
	to_free_tokens();
	free_arguments();
}
