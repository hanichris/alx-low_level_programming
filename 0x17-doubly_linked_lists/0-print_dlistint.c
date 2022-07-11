#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print out the integer elements of a
 * doubly linked list.
 * @h: const pointer to the head of the linked list.
 * Return: count of the nodes in the linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t count = 0;

	while (curr)
	{
		count++;
		printf("%d\n", curr->n);
		curr = curr->next;
	}
	return (count);
}
