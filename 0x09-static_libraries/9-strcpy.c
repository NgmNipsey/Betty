#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy the string pointer src
 *@dest:pointer value
 *@src: Pointer value
 * Return: char to the main.
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (counter >= 0)
	{
		*(dest + counter) = *(src + counter);
		if (*(src + counter) == '\0')
			break;
		counter++;
	}
	return (dest);
}
