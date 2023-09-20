#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copy string.
 *@dest: string.
 *@src: string.
 *@n: value.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
