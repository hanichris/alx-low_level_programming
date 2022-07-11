#include "lists.h"

/**
 * get_dnodeint_at_index - return the node at the specified index.
 * @head: pointer to the head of the linked list.
 * @index: required node's index.
 * Return: node specified.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int iter = 0;
	dlistint_t *curr = head;

	while (iter != index && curr)
	{
		curr = curr->next;
		iter++;
	}
	if (!curr)
		return (NULL);
	return (curr);
}
