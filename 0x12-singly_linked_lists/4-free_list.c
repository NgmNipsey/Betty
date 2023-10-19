#include "lists.h"

/**
 * free_list - function that free struct list_t.
 * @head: pointer.
 *
 * Return: Void.
 *
 * Description: free my struct of list_t.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
