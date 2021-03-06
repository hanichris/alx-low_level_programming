#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - insert a new node at the specified index.
 * @h: address of the pointer to the head of the linked list.
 * @idx: the specified index.
 * @n: the element to insert into the linked list.
 * Return: the new element inserted.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *curr = *h;
	unsigned int iter = 0;

	if (!*h || idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (iter != idx && curr)
	{
		curr = curr->next;
		iter++;
	}
	if ((idx - iter) != 0 && !curr)
		return (NULL);
	if (!curr)
		return (add_dnodeint_end(h, n));
	new->next = curr;
	new->prev = curr->prev;
	curr->prev = new;
	curr = new->prev;
	curr->next = new;
	return (new);
}
