#include "lists.h"

/**
 * listint_len - return number of elements.
 * @h: pointer.
 *
 * Return: counter.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
