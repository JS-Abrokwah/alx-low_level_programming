#include "lists.h"

/**
 * add_nodeint_end - add new node to the end of a list
 * @head: the first element of the list
 * @n: data for initializing the new node
 *
 * Return: the addres of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *iterator;

	iterator = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (iterator->next != NULL)
		iterator = iterator->next;
	iterator->next = new;

	return (new);
}
