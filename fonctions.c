#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * strings - Print strings
 * @list: va_list argument
*/
int strings(va_list list)
{
char *s = va_arg(list, char*);
int i = 0;
int count = 0;

while (s[i] != '\0')
{
count += _putchar(s[i]);
i++;
}
return (count);
}

/**
 * character - Print character
 * @list: va_list argument
*/
int character(va_list list)
{
int c = va_arg(list, int);
int count = 0;

count += _putchar(c);
return (count);
}

/**
 * integer - Print integer
 * @list: va_list argument
*/
int integer(va_list list)
{
int i = va_arg(list, int);
int count = 0;

count += print_integer(i);
return (count);
}

/**
 * decimal - Print decimal
 * @list: va_list argument
*/
int decimal(va_list list)
{
int d = va_arg(list, int);
int count = 0;

count += print_integer(d);
return (count);
}

/**
 * unsigned_int - Print decimal
 * @list: va_list argument
*/
unsigned int unsigned_int(va_list list)
{
	unsigned int unint = va_arg(list, unsigned int);
	int count = 0;

	count += print_un_int(unint);
	return (count);
}
