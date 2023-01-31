#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginnig of a linked list
 * @head: the first element of the list
 * @n: a data for initializing the new element
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
