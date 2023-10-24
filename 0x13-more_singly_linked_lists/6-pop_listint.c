#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: pointer to struct.
 *
 * Return: Head node data.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
