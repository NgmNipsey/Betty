#include "lists.h"

/**
 * dlistint_len - Print number of elements.
 * @h: Pointer to the struct typdef.
 *
 * Return: Count.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
