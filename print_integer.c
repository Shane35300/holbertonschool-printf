#include "main.h"
#include <limits.h>
/**
* print_integer - Print one integer
* Description: print the integers
* @nombre: number
* Return: Print one integer
*/
int print_integer(int nombre)
{
	char afficheur[11];
	int i = 1;
	int count = 0;

	if (nombre == INT_MIN)
	{
		count = write (1, "-", 1);
		count += write (1, "2147483648", 10);
	}

	if (nombre == 0)
	count += _putchar('0');

	if (nombre < 0)
	{
		nombre = -nombre;
		if (nombre != INT_MIN)
		count += _putchar('-');
	}

	while (nombre > 0)
	{
		afficheur[i] = '0' + nombre % 10;
		nombre /= 10;
		i++;
	}
	while (i > 1)
	{
		count += _putchar(afficheur[i - 1]);
		i--;
	}
	return (count);
}
