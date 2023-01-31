#include "lists.h"

/**
 * listint_len - checks and returns the length of linked list
 * @h: input linked list
 *
 * Return: length of h
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
