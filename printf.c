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
		{'u', unsigned_int}
		};

	va_list list;
	int length = 0;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	length = get_function(format, list, array);

	va_end(list);
	return (length);
}
