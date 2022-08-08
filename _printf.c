#include <stdio.h>
#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int count = 0, i = 0;

	va_list data;
	va_start(data,  format);

	/*format is a string*/

	// call_printf("Hello World")

	for (i = 0; format[i] != '%' && format[i] != '\0'; i++)
	{
		/*count the number of charactes*/
		count = count + _putchar(format[i]);
	}

	/*returns the count of characters to be printed */
	return (count);
}
