#include "function_pointers.h"

/**
 * array_iterator - executes a callback on each array element
 * @array: input array
 * @size: size of input array
 * @action: callback function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
