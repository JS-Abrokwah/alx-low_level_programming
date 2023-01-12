#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: memory size
 *
 * Return: void pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *loc;

	loc = malloc(b);
	if (loc == NULL)
		exit(98);
	else
		return (loc);
}
