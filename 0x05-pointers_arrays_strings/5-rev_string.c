#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Print revrsed string.
 *@s: Hold string.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int counter = 0, a, b;
	char *string, temp;

	while (counter >= 0)
	{
		if (s[counter] == '\0')
			break;
		counter++;
	}
	string = s;

	for (a = 0; a < (counter - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			temp = *(string + b);
			*(string + b) = *(string + (b - 1));
			*(string + (b - 1)) = temp;
		}
	}
}
