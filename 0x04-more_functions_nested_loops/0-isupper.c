#include "main.h"

/**
 * _isupper - check the Uppercase.
 * @c: store an int.
 * Return: Always 0 and 1.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
