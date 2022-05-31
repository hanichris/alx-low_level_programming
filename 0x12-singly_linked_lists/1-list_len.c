#include "lists.h"

/**
 * list_len - counts the number of elements in
 * a linked list.
 * @h: pointer to a linked list.
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	for (; h != NULL; h = h->next)
		len++;
	return (len);
}
