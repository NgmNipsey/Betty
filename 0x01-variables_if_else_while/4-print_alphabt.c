#include <stdio.h>

/**
 * main - lowercase except e and q
 * Return: 0
 */
int main(void)
{
	char low_bet = 'a';

	while (low_bet <= 'z')
	{
		if (low_bet == 'e' || low_bet == 'q')
		{
			low_bet++;
			continue;
		}
		putchar(low_bet);
		low_bet++;
	}
	putchar('\n');
	return (0);
}
