#include <stdio.h>

/**
 * main - Two by two combinations
 * Return: 0
 */
int main(void)
{
	int a = 0;

	for (a = 0; a < 100; a++)
	{
		int b = 0;

		for (b = 0; b < 100; b++)
		{
			if (b > a)
			{
				putchar('0' + (a / 10) + 0);
				putchar('0' + (a % 10) + 0);
				putchar(' ');
				putchar('0' + (b / 10) + 0);
				putchar('0' + (b % 10) + 0);
				if (a != 98 || b != 99)
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
