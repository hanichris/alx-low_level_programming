#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node at the end of the linked list.
 * @head: pointer to the pointer to the head of the linked list.
 * @n: integer to be added to the linked list.
 * Return: the pointer to the head of the linked list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		while (current->next)
			current = current->next;
		current->next = new_node;
	}
	return (*head);
}
