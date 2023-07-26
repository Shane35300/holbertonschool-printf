#include "main.h"

int print_un_int(unsigned int nombre)
{
	char afficheur[10];
	int i = 0;
	int count = 0;

	if (nombre == 0)
	{
		count += _putchar('0');
		return (count);
	}


	while (nombre > 0)
	{
		afficheur[i] = '0' + nombre % 10;
		nombre /= 10;
		i++;
	}
	while (i > 0)
	{
		count += _putchar(afficheur[i - 1]);
		i--;
	}
	return (count);
}
