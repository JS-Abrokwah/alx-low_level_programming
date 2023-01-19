#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stddef.h>
#include <stdarg.h>

/**
 * struct printer - structure type definition for printers
 * @symb: type symbol
 * @func: print function pointer to a callback function
 */
typedef struct printer
{
	char *symb;
	void (*func)(va_list arg);
} print_type;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*VARIADIC_FUNCTION_H*/
