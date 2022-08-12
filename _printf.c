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
				case 'd':
				count = count + print_decimal(va_arg(data, long int));
				break;
				case 'i':
				count = count + print_decimal(va_arg(data, long int));
				break;
				default:
				break;
			}
			i += 2;
		}
		/*print to screen each charact counted */
	}
	return (count);
}
