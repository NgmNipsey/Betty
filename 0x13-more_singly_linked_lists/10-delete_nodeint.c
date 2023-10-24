#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at given index.
 * @head: pointer.
 * @index: index;
 *
 * Return: 1 and -1;
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *prev;

	if (*head == NULL)
		return (-1);
	temp = *head;
	prev = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	prev->next = temp->next;
	free(temp);

	return (1);
}
