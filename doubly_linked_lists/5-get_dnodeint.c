#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: double linked list
 * @index: index of the element to be returned
 *
 * Return: List with the node at index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head || !index)
		return (head);
	return (get_dnodeint_at_index(head->next, index - 1));
}
