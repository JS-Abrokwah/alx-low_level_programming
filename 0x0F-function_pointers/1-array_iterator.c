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
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
