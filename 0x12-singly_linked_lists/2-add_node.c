#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a node to the head of the linked list.
 * @head: pointer to the pointer at the head of the list.
 * @str: string to add to the linked list.
 * Return: pointer to the head of the linked list.
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t length;
	list_t *node;

	length = strlen(str);
	node = malloc(sizeof(list_t));
	if(!node)
		return (NULL);
	node->str = strdup(str);
	node->len = length;
	node->next = *head;

	*head = node;
	return (*head);
}
