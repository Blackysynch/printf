#include "main.h"

/**
 * print_string - prints a string to replace identifier
 * @string: string
 * Return: count.
 */

int print_string(char *string)
{
	int count = 0;
	int i = 0;

	while (string[i] != '\0')
	{
		count += _putchar(string[i]);
		i++;
	}
	return (count);
}
