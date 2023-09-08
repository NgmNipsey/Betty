#include <stdio.h>

/**
 * main - lowercaase Alphabet
 * Return: 0
 */
int main(void)
{
	char low_bet = 'a';

	while (low_bet <= 'z')
	{
		putchar(low_bet);
		low_bet++;
	}
	putchar('\n');
	return (0);
}
