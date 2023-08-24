#include "monty.h"

/**
 * get_file_failed - handles the error when reading a file fails.
 * @filename: the name of the file that failed to open.
 */

void get_file_failed(char *filename)
{
	dprintf(2, "error: can't open file %s\n", filename);
	free_arguments();
	exit(EXIT_FAILURE);
}
