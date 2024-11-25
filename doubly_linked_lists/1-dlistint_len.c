#include "lists.h"

/**
 * dlistint_len - function that prints all the elements of a dlistint_t list
 * @h: doubly linked list
 *
 * Return: the number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
