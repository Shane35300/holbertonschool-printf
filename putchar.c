#include "main.h"
#include <unistd.h>
/**
* _putchar - Print integer
* Description: Print
* @c: character
* Return: Print integer
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
