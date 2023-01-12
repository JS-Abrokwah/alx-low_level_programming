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
		for (i = min; i <= max; i++)
		{
			len++;
		}
	}

	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);

	len = 0;
	for (i = min; i <= max; i++)
	{
		array[len] = i;
		len++;
	}
	return (array);
}
