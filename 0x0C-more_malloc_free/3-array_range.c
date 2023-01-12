#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array
 * @min: startin point
 * @max: ending point
 *
 * Return: newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, len;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		len = max - min + 1;
	}

	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		array[i] = min++;
	}
	return (array);
}
