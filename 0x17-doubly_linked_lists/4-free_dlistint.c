#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free up the memory utilised by the
 * doubly linked list.
 * @head: pointer to the head of the linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr);
	}
}
