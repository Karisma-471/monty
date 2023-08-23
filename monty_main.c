#include "monty.h"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	char *file_path = argv[1];

	FILE *file = fopen(file_path, "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file_path);
		exit(EXIT_FAILURE);
	}

	return(0);
}
