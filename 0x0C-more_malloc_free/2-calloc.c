#include "main.h"

/**
 * _memset - set momery with constant bytes.
 * @s: pointer string.
 * @b: char value, constant.
 * @n: limit of bytes
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
 * _calloc - allocates memory for array elements.
 * @nmemb: length of array.
 * @size: array size.
 * Return: POinter array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (size == 0 || nmemb == 0)
		return (NULL);
	mem = malloc(sizeof(int) * nmemb);
	if (mem == 0)
		return (NULL);
	_memset(mem, 0, sizeof(int) * nmemb);
	return (mem);
}
