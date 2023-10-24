#include "lists.h"

/**
 * reverse_listint - print list in reverse.
 * @head: pointer.
 *
 * Return: pointer.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *res = NULL, *prev = NULL;

	while (*head != NULL)
	{
		prev = (*head)->next;
		(*head)->next = res;
		res = *head;
		*head = prev;
	}
	*head = res;
	return (*head);
}
