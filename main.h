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
void (*f)(va_list list);
} elem_t;
int _putchar(char c);
int _printf(const char *format, ...);
void strings(va_list list);
void character(va_list list);
void integer(va_list list);
void decimal(va_list list);
void print_integer(int nombre);
void print_decimal(int nombre);
void percent(va_list list);

#endif /* MAIN_H */
