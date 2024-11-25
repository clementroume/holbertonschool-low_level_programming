#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: list to be freed
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *delete = head;

	while (head)
	{
		head = head->next;
		free(delete);
		delete = head;
	}
}
