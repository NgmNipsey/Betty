#include <stdio.h>

/**
 * main - lowercase in reverse
 * Return: 0
 */
int main(void)
{
	char low_case = 'z';

	for (low_case = 'z'; low_case >= 'a'; low_case--)
	{
		putchar(low_case);
	}
	putchar('\n');
	return (0);
}
