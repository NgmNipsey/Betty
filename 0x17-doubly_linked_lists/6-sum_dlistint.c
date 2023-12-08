#include "lists.h"

/**
 * sum_dlistint - Sum all data (n).
 * @head: Pointer.
 *
 * Return: summed data(n).
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
