#include "main.h"

/**
 * clear_bit - clear bit at given index to zero.
 * @n: pointer.
 * @index: index.
 *
 * Return: 1 and -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index >= 8 * sizeof(n))
		return (-1);
	m = 1 << index;
	if (*n & m)
		*n ^= m;
	return (1);
}
