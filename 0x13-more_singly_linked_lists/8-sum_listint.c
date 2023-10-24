#include "lists.h"

/**
 * sum_listint - function that prints sum.
 * @head: pointer to struct.
 *
 * Return: sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
