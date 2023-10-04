#include "main.h"

/**
 * create_array - create array of char.
 * @size: size allocated.
 * @c: character.
 * Return: Pointer char.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
		return (0);
	while (size--)
	{
		arr[size] = c;
	}
	return (arr);
}
