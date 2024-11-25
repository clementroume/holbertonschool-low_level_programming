#include "lists.h"

/**
 * sum_dlistint - function that prints all the elements of a dlistint_t list
 * @head: doubly linked list
 *
 * Return: the sum of all nodes or 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
