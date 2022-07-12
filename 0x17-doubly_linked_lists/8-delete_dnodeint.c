#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete the node at the specified index.
 * @head: address of the pointer to the head node.
 * @index: index of interest.
 * Return: 1 or -1 depend on success rate.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	dlistint_t *temp;
	unsigned int iter = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}

	while (iter != index && curr)
	{
		curr = curr->next;
		iter++;
	}
	if (!curr)
		return (-1);
	temp = curr;
	if (!curr->next)
	{
		curr = curr->prev;
		curr->next = NULL;
		temp->prev = NULL;
	}
	else
	{
		temp->next->prev = temp->prev;
		curr = temp->prev;
		curr->next = temp->next;
	}
	free(temp);
	return (1);
}
