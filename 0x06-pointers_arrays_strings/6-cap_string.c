#include "main.h"
#include <string.h>

/**
 * cap_string - Capitalize string.
 * @c: pointer to string.
 * Return: Pointer.
 */
char *cap_string(char *c)
{
	int a;
	int b;

	char sepa[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	a = 0;
	while (c[a] != '\0')
	{
		if (a == 0 && c[a] >= 97 && c[a] <= 122)
		{
			c[a] = c[a] - 32;
		}
		b = 0;
		while (sepa[b] != '\0')
		{
			if (sepa[b] == c[a] && (c[a + 1] >= 97 && c[a + 1] <= 122))
			{
				c[a + 1] = c[a + 1] - 32;
			}
			b++;
		}
		a++;
	}
	return (c);
}
