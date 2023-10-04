#include "main.h"

/**
 * _len - calculate actual length.
 * @s: size of string.
 * Return: string length.
 */
int _len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * str_concat - concatenate two strings.
 * @s1: size one.
 * @s2: size two.
 * Return: Pointer string.
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *arr;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = _len(s1);
	size2 = _len(s2);
	arr = malloc((size1 + size2) * sizeof(char) + 1);
	if (arr == 0)
		return (0);
	for (i = 0; i <= (size1 + size2); i++)
	{
		if (i < size1)
			arr[i] = s1[i];
		else
			arr[i] = s2[i - size1];
	}
	arr[i] = '\0';
	return (arr);
}
