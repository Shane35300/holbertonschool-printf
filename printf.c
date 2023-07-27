#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Print all types
 * @format: first parameter
 * Return: Print all types
 */
int _printf(const char *format, ...)
{
	elem_t array[] = {
		{'c', character},
		{'s', strings},
		{'i', integer},
		{'d', decimal},
		{'%', print_percent},
		{'u', unsigned_int}};

	va_list list;
	int i = 0, j, length = 0, prevLength;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			prevLength = length;
			while (j < 6)
			{
				if (format[i] == array[j].element)
				{
					length += array[j].f(list);
					break;
				}
				j++;
			}
			if (prevLength == length && format[i] != 's')
			{
				length += _putchar('%');
				length += _putchar(format[i]);
			}
		}
		else
			length += _putchar(format[i]);
		i++;
	}
	va_end(list);
	return (length);
}
