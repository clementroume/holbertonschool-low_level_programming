#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: doubly linked list to be appended
 * @idx: index where insert a new node
 * @n: int value of the new node
 *
 * Return: the appended list at index idx
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx > 1)
	{
		temp = temp->next;
		if (!temp)
			return (NULL);
		idx--;
	}
	if (!temp->next)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
