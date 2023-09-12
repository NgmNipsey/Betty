#include <stdio.h>

/**
 * print_alphabet - Print lowercase alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char low_alpha = 'a';

	for (low_alpha = 'a'; low_alpha <= 'z'; low_alpha++)
	{
		putchar(low_alpha);
	}
	putchar('\n');
}
