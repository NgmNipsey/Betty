#include "main.h"

/**
 * get_endianness - check endianness of the system.
 *
 * Return: 1 and 0 for little and big endian.
 */
int get_endianness(void)
{
	int n_byte = 1;

	if (*(char *)&n_byte == 1)
		return (1);
	else
		return (0);
}
