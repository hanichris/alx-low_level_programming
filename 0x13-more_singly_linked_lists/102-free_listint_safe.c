#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - free up the memory utilised by a linked list
 * even in the presence of a loop.
 * @h: pointer to the pointer to the head of the linked list.
 * Return: Number of nodes freed up.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *temp;
	long int addr_diff = 0;

	while (*h)
	{
		addr_diff = *h - (*h)->next;
		if (addr_diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			node_count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			node_count++;
			break;
		}
	}
	*h = NULL;
	return (node_count);
}
