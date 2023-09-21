#include "main.h"

/**
 * print_number - print integer.
 * @n: Hold integer value
 * Return: always 0.
 */
void print_number(int n)
{
	int j = n;

	if (n < 0)
	{
		_putchar(25);
		j = -j;
	}
	if (j / 10)
	{
		print_number(j / 10);
	}
	_putchar(j % 10 + '0');
}
