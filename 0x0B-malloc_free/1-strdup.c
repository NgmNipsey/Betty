#include "main.h"

/**
 * _strdup - return a pointer to newly allocated strings.
 * @str: store pointer string.
 * Return: pointer.
 */
char *_strdup(char *str)
{
	int j = 0, size = 0;
	char *arr;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
	{
		arr = malloc(size * sizeof(*str) + 1);
		size++;
	}
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (; j < size; j++)
				arr[j] = str[j];
		}
	return (arr);
}
