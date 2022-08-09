#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - print string and returns out put
 * @format: string of characters
 * Return: returns count of characters in string
 */

int _printf(const char *format, ...)
{
	int count = 0, i = 0;

	va_list data;

	va_start(data,  format);

	/*format is a string*/

	/* call_printf("Hello World")*/

	for (i = 0; format[i] != '\0';)
	{
		/*count the number of charactes*/
		if (format[i] != '%')
		{
		count = count + _putchar(format[i]);
		i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
				/* print charcter from va_argument */
				count = count + _putchar(va_arg(data, int));
				break;
				case 's':
				/* print string from va_argument */
				count = count + print_string(va_arg(data, char *));
				break;
				case '%':
				/*print string from va_argument */
				count = count + _putchar(format[i]);
				break;
				default:
				break;
			}
			i += 2;
		}
		/*print to the screen each characters counted */
	}

	/*returns the count of characters to be printed */
	return (count);
}
