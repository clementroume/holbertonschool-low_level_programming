#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 * @head: list
 * @index: index where the node should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (!head || !*head)
		return (-1);

	temp = *head;

	while (temp && index--)
		temp = temp->next;

	if (!temp)
		return (-1);

	if (temp->prev)
		temp->prev->next = temp->next;
	else
		*head = temp->next;

	if (temp->next)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
