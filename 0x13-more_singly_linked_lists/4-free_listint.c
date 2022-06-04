#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free up the memory used up by a
 * linked list.
 * @head: pointer to the head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
