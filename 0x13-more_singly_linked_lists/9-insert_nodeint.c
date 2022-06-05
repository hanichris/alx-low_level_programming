#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a node at the specified index.
 * @head: pointer to the pointer to the head of the linked list.
 * @idx: index of interest.
 * @n: element to insert at the specified index.
 * Return: pointer to the head of the linked list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	unsigned int iter = 0;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	while (current->next && (iter < idx - 1))
	{
		current = current->next;
		iter++;
	}
	if (!current->next)
		return (NULL);
	new_node->next = current->next;
	current->next = new_node;
	return (*head);
}
