#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - print out the elements of a linked list once even if a
 * loop exists in the list
 * @head: pointer to the head of the linked list.
 * Return: The total number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current = head;
	long int addr_diff = 0;

	while (current)
	{
		node_count++;
		addr_diff = current - current->next;
		printf("[%p] %d\n", (void *)current, current->n);
		if (addr_diff > 0)
			current = current->next;
		else
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}
	}
	return (node_count);
}
