#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pop off the top node in the linked
 * list and return the value that node held.
 * @head: pointer to the pointer of the linked list.
 * Return: Element that was in the head node.
 */
int pop_listint(listint_t **head)
{
	int top;
	listint_t *current;

	if (!*head)
		return (0);
	current = *head;
	*head = (*head)->next;
	top = current->n;
	free(current);
	return (top);
}
