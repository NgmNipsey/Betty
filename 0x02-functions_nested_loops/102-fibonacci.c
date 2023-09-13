#include <stdio.h>

/**
 * main - Fabonacci of 50 numbers
 * Return: always 0
 */
int main(void)
{
	unsigned long first = 0;
	unsigned long second = 1;
	unsigned long next, lmt;

	for (lmt = 0; lmt < 50; lmt++)
	{
		next = first + second;
		printf("%lu", next);
		first = second;
		second = next;
		if (lmt == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
