#include "lists.h"
#include <stdio.h>

/**
 * print_list - print out the elements of a linked list
 * in a formatted manner and return the total number of elements.
 * @h : pointer to a linked list
 * Return: Number of elements in linked list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp)
	{
		if (temp->str)
			printf("[%d] %s\n", temp->len, temp->str);
		else
			printf("[0] (nil)\n");
		count++;
		temp = temp->next;
	}
	return (count);
}
