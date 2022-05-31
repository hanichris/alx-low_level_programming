#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - frees up memory used to create linked list.
 * @head: pointer to the head of the linked list.*
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
