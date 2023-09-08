#include <stdio.h>

/**
 * main - Base 16 numbering
 * Return: 0
 */
int main(void)
{
	int ba = 0;
	char b16 = 'a';

	for (ba = 0; ba < 10; ba++)
	{
		putchar('0' + ba);
	}
	for (b16 = 'a'; b16 <= 'f'; b16++)
	{
		putchar(b16);
	}
	putchar('\n');
	return (0);
}
