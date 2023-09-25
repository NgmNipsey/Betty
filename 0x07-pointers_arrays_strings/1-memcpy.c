#include "main.h"

/**
 * _memcpy - copy memory address.
 * @dest: destination.
 * @src: source.
 * @n: string value.
 * Return: pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
