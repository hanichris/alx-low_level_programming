#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node to the head of a linked list.
 * @head: pointer to the pointer of the head of a linked list.
 * @n: the integer to add to the linked list.
 * Return: the address of the head of the linked list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
