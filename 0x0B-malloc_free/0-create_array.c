#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create dynamic array at runtime
 * @size: size of memory to allocate
 * @c: initialization character
 *
 * Return: char pointer to the allocated memory
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *arr = malloc(size);
	unsigned int i;

	if (*arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}

	return (arr);
}
