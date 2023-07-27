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
		{'%', percent},
		{'u', unsigned_int}
		};
		va_list list;
		int i = 0, j;
		int lenght = 0;

		va_start(list, format);

		if (format == NULL)
		return (-1);

		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				j = 0;
				while (j < 6)
				{
					if (format[i] == array[j].element)
					{
						lenght += array[j].f(list);
						break;
					}
					j++;
				}
			}
			else
			{
				lenght += _putchar(format[i]);
			}
			i++;
		}
	va_end(list);
	return (lenght);
}
