#include "main.h"
#include <stdio.h>

/**
 * _abs - absolute value
 * @x: int value
 * Return: Always 0.
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
