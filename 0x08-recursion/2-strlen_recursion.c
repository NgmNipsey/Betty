#include "main.h"

/**
 * _strlen_recursion - prints length.
 * @s: store a pointer.
 * Return: length.
 */
int _strlen_recursion(char *s)
{
	int ln = 0;

	if (*s > '\0')
	{
		ln += _strlen_recursion(s + 1) + 1;
	}
	return (ln);
}
