#include "lists.h"

/**
 * dlistint_len - determine the number of elements in a
 * doubly linked list.
 * @h: const pointer to the head of the linked list.
 * Return: number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t count = 0;

	while (curr)
	{
		count++;
		curr = curr->next;
	}
	return (count);
}
