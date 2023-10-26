#include "main.h"

/**
 * get_bit - returns a value of bit at given index.
 * @n: value assigned.
 * @index: index.
 *
 * Return: bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
