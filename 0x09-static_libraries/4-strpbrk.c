#include "main.h"

/**
 * _strpbrk - searches string.
 * @s: pointer.
 * @accept: pointer.
 * Return: pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return ((char *)s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
