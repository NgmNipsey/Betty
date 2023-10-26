#include "main.h"

/**
 * set_bit - function that set value of bit to 1.
 * @n: pointer.
 * @index: index.
 *
 * Return: 1 and -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index >= 8 * sizeof(n))
		return (-1);
	m = 1 << index;
	*n |= m;
	return (1);
}
