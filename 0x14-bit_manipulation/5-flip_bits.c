#include "main.h"

/**
 * flip_bits - Return the number of bits to be flips.
 * @n: value one.
 * @m: value two.
 *
 * Return: counter.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int nbits = n ^ m;

	while (nbits)
	{
		count += nbits & 1;
		nbits >>= 1;
	}
	return (count);
}
