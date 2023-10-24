#include "lists.h"

/**
 * add_nodeint_end - add new node at the end.
 * @head: pointer.
 * @n: store value.
 *
 * Return: new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);
	if (last != NULL)
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	else
		*head = new;
	return (new);
}
