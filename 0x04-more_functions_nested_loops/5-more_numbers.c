#include "main.h"

/**
 * more_numbers - Print 10 times number 0 to 14.
 * Return: Always 0.
 */
void more_numbers(void)
{
	unsigned long int i = 0, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar(10);
	}
}
