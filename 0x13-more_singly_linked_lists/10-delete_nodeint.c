#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete the node at the specified index.
 * @head: pointer to the pointer to the head of the linked list.
 * @index: index of the node to delete.
 * Return: 1 if successful otherwise -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *del_node;
	unsigned int iter = 0;

	if (index == 0 && *head)
	{
		del_node = *head;
		*head = (*head)->next;
		del_node->next = NULL;
		free(del_node);
		return (1);
	}
	if (!*head)
		return (-1);
	while (current && iter < index - 1)
	{
		current = current->next;
		iter++;
	}
	if (!current)
		return (-1);
	del_node = current->next;
	current->next = current->next->next;
	del_node->next = NULL;
	free(del_node);
	return (1);
}
