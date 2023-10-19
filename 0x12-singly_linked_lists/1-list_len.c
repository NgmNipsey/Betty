#include "lists.h"

/**
 * list_len - return Number of elements.
 * @h: pointer.
 *
 * Return: Number of elements through counter.
 *
 * Description: singly link list for number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}
