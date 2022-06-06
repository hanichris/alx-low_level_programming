#include "lists.h"

/**
 * reverse_listint - reverse a linked list.
 * @head: pointer to the pointer to the head of the linked list.
 * Return: pointer to the head of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	*head = prev;
	return (*head);
}
