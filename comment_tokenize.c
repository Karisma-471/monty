#include "monty.h"

/**
  * set_n_tokens -
  */

void set_n_tokens(void)
{
	char *delims = " \n", *token = NULL, *linecpy = NULL;

	linecpy = malloc(sizeof(char) * (strlen(arguments->comment) + 1));
	strcpy(linecpy, arguments->comment);
	arguments->n_tokens = 0;
	token = strtok(linecpy, delims);
	while (token)
	{
		arguments->n_tokens += 1;
		token = strtok(NULL, delims);
	}
	free(linecpy);

}
/**
 * to_tokenize_comment - Tokenizes the comments read from file.
 */

void to_tokenize_comment(void)
{
	int i = 0;
	char *delims = " \n", *token = NULL, *linecpy = NULL;

	set_n_tokens();
	arguments->tokens = malloc(sizeof(char *) *
			(arguments->n_tokens + 1));
	linecpy = malloc(sizeof(char) * (strlen(arguments->comment) + 1));
	strcpy(linecpy, arguments->comment);

	strcpy(linecpy, arguments->comment);
	token = strtok(linecpy, delims);
	while (token)
	{
		arguments->tokens[i] = malloc(sizeof(char) *
				(strlen(token) + 1));
		if (arguments->tokens[i] == NULL)
			malloc_failed();
		strcpy(arguments->tokens[i], token);
		token = strtok(NULL, delims);
		i++;
	}
	arguments->tokens[i] = NULL;
	free(linecpy);
}
