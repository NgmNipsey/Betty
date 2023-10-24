#include "lists.h"

/**
 * print_listint_safe - print list.
 * @head: pointer.
 *
 * Return: counter.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t counter = 0;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		counter++;
		printf("[%p] %d\n", (void *)current, current->n);
		if (current <= head)
			break;
	}
	return (counter);
}
