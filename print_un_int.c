#include "main.h"
/**
 * print_un_int - nom de la fonction
 * Description: print une décimale
 * @nombre: nombre
 * Return: retourne la longueur
*/
int print_un_int(unsigned int nombre)
{
	char afficheur[11];
	int i = 1;
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
	while (i > 1)
	{
		count += _putchar(afficheur[i - 1]);
		i--;
	}
	return (count);
}
