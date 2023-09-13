#include "main.h"

/**
 * jack_bauer - 24 hours system
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i, a, b, c;

	for (i = 0; i <= 2; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			if ((i <= 1 && i <= 9) || (i <= 2 && a <= 3))
			{
				for (b = 0; b <= 5; b++)
				{
					for (c = 0; c <= 9; c++)
					{
						_putchar(i + '0');
						_putchar(a + '0');
						_putchar(58);
						_putchar(b + '0');
						_putchar(c + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
