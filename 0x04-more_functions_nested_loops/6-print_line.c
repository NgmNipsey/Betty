#include "main.h"

/**
 * print_line - check and print straight line.
 *@n: store value of n.
 * Return: Always 0.
 */
void print_line(int n)
{
	char a = '_';
	int i = 1;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar(a);
	}
	_putchar('\n');
}
