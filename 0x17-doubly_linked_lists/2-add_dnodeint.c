#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node to the head of the doubly
 * linked list.
 * @head: address of the pointer to the head of the linked list.
 * @n: integer to be added to the linked list.
 * Return: address of the added element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);	
	if (*head)
		(*head)->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
