#include <stdio.h>

/**
 * main - Three digitsts combination
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
			int c = 0;

			for (c = 0; c < 10; c++)
			{
				if (c > b && c > a && b > a)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if (a != 7 || b != 8 || c != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
