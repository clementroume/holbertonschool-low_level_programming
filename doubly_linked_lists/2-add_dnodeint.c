#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function that prints all the elements of a dlistint_t list
 * @head: doubly linked list to be appended
 * @n: the integer to be added in the list
 *
 * Return: the number of nodes.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
