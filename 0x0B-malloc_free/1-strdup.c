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
	for (; str[size] != '\0'; size++)
		;
		arr = malloc(size * sizeof(*str) + 1);
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
