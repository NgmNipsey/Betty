#include "main.h"
#include <string.h>

/**
 * rot13 - encode string.
 * @c: store pointer.
 * Return: pointer to destination.
 */
char *rot13(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if ((c[i] >= 'A' && c[i] <= 'M') || (c[i] >= 'a' && c[i] <= 'm'))
		{
			c[i] += 13;
		}
		else if ((c[i] >= 'N' && c[i] <= 'Z') || (c[i] >= 'n' && c[i] <= 'z'))
		{
			c[i] -= 13;
		}
		i++;
	}
	return (c);
}
