#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct array - Short description
 * @element: First member
 * @f: pointeur de fonction
*/
typedef struct array
{
char *element;
int (*f)(va_list list);
} elem_t;
int _putchar(char c);
int _printf(const char *format, ...);
int strings(va_list list);
int character(va_list list);
int integer(va_list list);
void decimal(va_list list);
void print_integer(int nombre);
void print_decimal(int nombre);
void percent(va_list list);
int unsigned_int(va_list list);
int print_un_int(unsigned int nombre);

#endif /* MAIN_H */
