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

	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot2[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 50; j++)
		{
			if (c[i] == rot1[j])
			{
				c[i] = rot1[j];
				break;
			}
		}
	}
return (c);
}
