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
	int a, b;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
