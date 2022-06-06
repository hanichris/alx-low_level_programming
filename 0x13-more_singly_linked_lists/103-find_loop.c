#include "lists.h"

/**
 * find_listint_loop - find the first node in a loop if present
 * in a linked list.
 * @head: pointer to the head of the linked list.
 * Return: node at the beginning of the loop in a linked list or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr = head;
	listint_t *fast_ptr = head;

	if (!head || !head->next)
		return (NULL);

	while (fast_ptr && fast_ptr->next)
	{
		fast_ptr = fast_ptr->next->next;
		slow_ptr = slow_ptr->next;
		if (slow_ptr == fast_ptr)
			break;
	}
	if (!fast_ptr)
		return (NULL);
	slow_ptr = head;
	while (slow_ptr != fast_ptr)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;
	}
	return (slow_ptr);
}
