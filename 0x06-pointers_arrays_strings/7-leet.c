#include "main.h"

/**
 * leet - replacing string.
 * @c: store pointer.
 * Return: Return c.
 */
char *leet(char *c)
{
	int a, b;

	char leet_char[] = "AaEeOoTtLl";
	char leet_num[] = "4433007711";

	a = 0;
	while (c[a] != '\0')
	{
		b = 0;
		while (leet_char[b] != '\0')
		{
			if (c[a] == leet_char[b])
			{
				c[a] = leet_num[b];
			}
			b++;
		}
		a++;
	}
	return (c);
}
