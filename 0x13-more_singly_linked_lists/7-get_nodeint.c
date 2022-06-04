#include "lists.h"

/**
 * get_nodeint_at_index - get the node at the specified index.
 * @head: pointer to the head of the linked list.
 * @index: index of interest.
 * Return: node at specified index or NULL if node doesnt exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int iter = 0;

	while (iter != index && current)
	{
		current = current->next;
		iter++;
	}
	if (!current)
		return (NULL);
	return (current);
}
