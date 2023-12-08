#include "lists.h"

/**
 * add_dnodeint_end - Add new node at the end.
 * @head: pointer
 * @n: const integer.
 *
 * Return: new node added.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	last_node = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
	new_node->prev = last_node;
	return (new_node);
}
