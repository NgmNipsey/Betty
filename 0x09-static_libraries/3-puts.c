#include "main.h"

/**
 * _puts - check and print string.
 *@str:Hold string.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int counter = 0;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[counter]);
		counter++;
	}
}
