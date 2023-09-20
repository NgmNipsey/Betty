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
	while (src[i] != '\0')
	{
		dest(myResults + i)  = src[i];
		dest(myResults + i) = '\0';
	}
	return (dest);
}
