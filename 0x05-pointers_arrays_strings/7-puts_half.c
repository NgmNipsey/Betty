#include "main.h"

/**
 * puts_half - check and print half string
 *@str: Hold string.
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int counter = 0, i;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
			break;
		counter++;
	}

	if (counter % 2 == 1)
		i = counter / 2;
	else
		i = (counter - 1) / 2;

	for (i++; i < counter; i++)
		_putchar(str[i]);
	_putchar('\n');
}
