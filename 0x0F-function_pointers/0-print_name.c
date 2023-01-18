#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a callback function
 * @name: name to be printed
 * @f: callback function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
