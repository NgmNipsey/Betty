#include <stdio.h>

/**
 * main - Lower and Upper case
 * Return: 0
 */
int main(void)
{
	char low_bet = 'a';
	char up_bet = 'A';

	while (low_bet <= 'z')
	{
		putchar(low_bet);
		low_bet++;
	}
	while (up_bet <= 'Z')
	{
		putchar(up_bet);
		up_bet++;
	}
	putchar('\n');
	return (0);
}
