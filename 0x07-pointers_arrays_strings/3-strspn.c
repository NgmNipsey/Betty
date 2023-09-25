#include "main.h"

/**
 * _strspn - get length of prefix substring.
 * @s: pointer.
 * @accept: pointer.
 * Return: length.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
				break;
			a++;
		}
		if (*a == '\0')
			break;
		len++;
		s++;
	}
	return (len);
}
