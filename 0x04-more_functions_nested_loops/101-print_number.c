#include "main.h"

/**
 * print_number - Print an integer
 * @n: Hold a value
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int value = n;

	if (n < 0)
	{
		_putchar('-');
		value = -value;
	}
	if (value > 9)
	{
		print_number(value / 10);
	}
	_putchar(value % 10 + '0');
}
