#include "lists.h"

/**
 * free_dlistint - free double linked list.
 * @head: pointer.
 *
 * Return: Void to the main.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
