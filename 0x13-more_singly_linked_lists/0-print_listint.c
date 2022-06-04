#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - print out the elements in the linked
 * list and return the total number of elements.
 * @h: pointer to the head of the linked list.
 * Return: number of elements in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t node_num = 0;

	while (current)
	{
		printf("%d\n", current->n);
		node_num++;
		current = current->next;
	}
	return (node_num);
}
