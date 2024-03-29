#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @h: the input linkrd list
 *
 * Return: number of nodes in the input linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}

	return (node);
}
