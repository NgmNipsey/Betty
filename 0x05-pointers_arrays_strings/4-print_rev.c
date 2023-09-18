#include "main.h"
#include <string.h>

/**
 * print_rev - print string in reverse;
 *@s: Hold string.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int counter = strlen(s);
	int i;

	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
