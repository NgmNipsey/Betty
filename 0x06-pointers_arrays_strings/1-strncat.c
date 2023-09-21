#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenate two strings.
 *@dest: Hold string.
 *@src: Hold string value.
 *@n: store a value.
 * Return: Results.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j == n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
