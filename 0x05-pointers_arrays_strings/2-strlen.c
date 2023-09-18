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

	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
