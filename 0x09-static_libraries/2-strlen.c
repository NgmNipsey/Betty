#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the length of the string.
 *@s: store char value.
 * Return: char to the main.
 */
int _strlen(char *s)
{
	int counter = 0;

	while (counter >= 0)
	{
		if (s[counter] == '\0')
			break;
		counter++;
	}

	for (counter--; counter >= 0; counter--)
		_putchar(s[counter]);
	_putchar('\n');
}
