#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at any given index.
 * @head: Pointer.
 * @index: Index.
 *
 * Return: 1 and -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *next;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp != NULL && i < index - 1; i++)
		tmp = tmp->next;
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	next = tmp->next->next;
	free(tmp->next);
	tmp->next = next;
	if (next != NULL)
		next->prev = tmp;
	return (1);
}
