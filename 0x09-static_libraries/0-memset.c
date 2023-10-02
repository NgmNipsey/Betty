#include "main.h"

/**
 * _memset - fill memory with a constant byte.
 * @s: Hold a pointer.
 * @b: Hold a value.
 * @n: Hod constant byte.
 * Return: pOinter.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
