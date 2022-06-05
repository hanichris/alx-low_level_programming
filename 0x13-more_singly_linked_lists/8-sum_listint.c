#include "lists.h"

/**
 * sum_listint - sum all the elements in the linked list.
 * @head: pointer to the head of the linked list.
 * Return: Cumulative sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

