#include "main.h"

/**
 * malloc_checked - allocates amount of memory.
 * @b: hold size.
 * Return: Pointer.
 */
void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (mem == 0)
		exit(98);
	return (mem);
}
