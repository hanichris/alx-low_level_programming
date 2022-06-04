#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free up the memory used up by
 * a linked list and set the head pointer to NULL.
 * @head: pointer to the pointer of the head of the
 * linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while ((current = *head) != NULL)
	{
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
