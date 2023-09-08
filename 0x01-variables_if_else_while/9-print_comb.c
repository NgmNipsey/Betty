#include <stdio.h>

/**
 * main - Possible combination of single digits
 * Return: 0
 */
int main(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
