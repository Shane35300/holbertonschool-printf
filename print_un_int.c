#include "main.h"

void print_un_int(unsigned int nombre)
{
	char afficheur[10];
	int i = 0;

	if (nombre == 0)
	_putchar('0');


	while (nombre > 0)
	{
		afficheur[i] = '0' + nombre % 10;
		nombre /= 10;
		i++;
	}
	while (i > 0)
	{
		_putchar(afficheur[i - 1]);
		i--;
	}

}
