#include "lists.h"

/**
 * get_nodeint_at_index - function that returns nth node.
 * @head: pointer
 * @index: index.
 *
 * Return: nth.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	return (current == NULL ? NULL : current);
}
