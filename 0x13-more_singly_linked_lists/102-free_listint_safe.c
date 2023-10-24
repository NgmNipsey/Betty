#include "lists.h"

/**
 * free_listint_safe - free list.
 * @h: pointer.
 *
 * Return: counter.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *temp;

	while (*h)
	{
		if (*h <= (*h)->next)
		{
			free(*h);
			*h = NULL;
			counter++;
			break;
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
		counter++;
	}
	return (counter);
}
