#include "main.h"
#include <string.h>

/**
 * rot13 - encode string.
 * @c: store pointer.
 * Return: pointer to destination.
 */
char *rot13(char *c)
{
	int i, j;

	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == rot1[j])
			{
				c[i] = rot2[j];
				break;
			}
		}
	}
return (c);
}
