#include "lists.h"

/**
 * listint_len - count the number of elements in the
 * linked list.
 * @h: pointer to the head of the linked list.
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *current = h;

	while (current)
	{
		node_count++;
		current = current->next;
	}
	return (node_count);
}
