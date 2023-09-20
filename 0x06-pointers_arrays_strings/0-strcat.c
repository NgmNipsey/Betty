#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenate string.
 * @dest: Store string.
 * @src: store string.
 * Return: Pointer.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int myResults = strlen(dest);

	i = 0;
	for (i = 0; src[i] != '\0'; i++)
		dest[myResults + i] = src[i];

	dest[myResults + i] = '\0';
	return (dest);
}
