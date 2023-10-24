#include "lists.h"

/**
 * find_listint_loop - find a loop in a list.
 * @head: pointer.
 *
 * Return: NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_up = head, *fast_up = head;

	while (slow_up && fast_up && fast_up->next)
	{
		slow_up = slow_up->next;
		fast_up = fast_up->next;
		if (slow_up == fast_up)
			return (slow_up);
	}
	return (NULL);
}
