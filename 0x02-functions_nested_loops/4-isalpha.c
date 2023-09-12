#include <stdio.h>

/**
 * _isalpha - Check Character
 * @c: int value
 * Return: 1 and 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
