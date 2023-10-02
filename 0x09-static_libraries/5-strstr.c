#include "main.h"

/**
 * _strstr - locates substring.
 * @haystack: Pointer to char
 * @needle: pointer to dest.
 * Return: Pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
