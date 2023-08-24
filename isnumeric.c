#include "monty.h"

/**
 * is_num - Checks if a string represents a valid integer number.
 * @str: The string to check.
 * Return: 1 if the string is a valid number, 0 otherwise. (successful)
 */
int is_num(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (x == 0 && str[x] == '-' && str[x + 1])
		{
			x++;
			continue;
		}
		if (str[x] < '0' || str[x] > '9')
			return (0);
		x++;
	}

	return (1);
}
