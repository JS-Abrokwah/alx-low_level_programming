#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all elements of a list
 * @h: head of the list to be printed
 *
 * Return: number of list elements printed
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;


	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		n += 1;
	}

	return (n);
}
