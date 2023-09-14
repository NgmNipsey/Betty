#include "main.h"

/**
 * print_diagonal - check and print digonal.
 *@n: Hold value for digonal.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a, b;
if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
_putchar(' ');

_putchar('\\');

if (a == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
