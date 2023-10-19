#include "lists.h"

/**
 * add_node_end - Add new node at the end.
 * @head: head.
 * @str: character string;
 *
 * Return: Address.
 *
 * Description: function to add new node add the end.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new_node, *last;

	if (head == NULL || str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new_node->next = *head;
	new_node->len  = len;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (*head);
}
