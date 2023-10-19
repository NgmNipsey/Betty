#include "lists.h"

/**
 * add_node - function to add new nodes.
 * @head: single link list node head.
 * @str: string character.
 *
 * Return: an address.
 *
 * Description: To add new nodes at the beginning.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new_node;

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
	new_node->len = len;
	*head = new_node;
	return (new_node);
}
