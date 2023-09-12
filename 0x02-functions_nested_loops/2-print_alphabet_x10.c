#include <stdio.h>

/**
 * print_alphabet_x10 - print lowercase ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int limit = 1;

	for (limit = 1; limit <= 10; limit++)
	{
		char low_alpha = 'a';

		for (low_alpha = 'a'; low_alpha <= 'z'; low_alpha++)
		{
			putchar(low_alpha);
		}
		putchar('\n');
	}
}
