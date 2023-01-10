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
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (arr);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
