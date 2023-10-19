#include "lists.h"

/**
 * print_list - print all elements in list_t.
 * @h: pointer
 *
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		counter++;
		current = current->next;
	}
	return (counter);
}
