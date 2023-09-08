#include <stdio.h>

/**
 * main - Base ten numbering
 * Return: 0
 */
int main(void)
{
	int btn = 0;

	for (btn = 0; btn < 10; btn++)
	{
		putchar('0' + btn);
	}
	putchar('\n');
	return (0);
}
