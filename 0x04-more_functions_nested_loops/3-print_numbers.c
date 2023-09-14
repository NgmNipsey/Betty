#include "main.h"

/**
 * print_numbers - check and print 9 numbers
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
