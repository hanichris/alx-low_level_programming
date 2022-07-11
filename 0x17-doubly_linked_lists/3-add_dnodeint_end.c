#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add a new node to the end of the doubly
 * linked list.
 * @head: address of the pointer to the head of the linked list.
 * @n: new element to be added to the doubly linked list.
 * Return: the new element added to the linked list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *curr;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		curr = *head;
		while (curr->next)
			curr = curr->next;
		curr->next = new;
		new->prev = curr;
	}
	return (new);
}
