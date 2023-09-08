#include <stdio.h>

/**
 * main - Combination of two digits
 * Return: 0
 */
int main(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		int b = 0;

		for (b = 0; b < 10; b++)
		{
			if (b > a)
			{
				putchar('0' + a);
				putchar('0' + b);
				if (a != 8 || b != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
