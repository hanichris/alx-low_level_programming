#include "lists.h"

/**
 * sum_dlistint - sum the elements of the doubly
 * linked list.
 * @head: pointer to the head of the linked list.
 * Return: Sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
