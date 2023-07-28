#include "main.h"

/**
 * get_function - Print all types
 * @format: first parameter
 * @list: va_list
 * @array: struct
 * Return: Print all types
 */

int get_function(const char *format, va_list list, elem_t *array)
{
	int i = 0, j, length = 0, prevLength;

		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				if (format[i] == '\0')
				return (-1);

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
		return (length);
}
