#include <stdio.h>

/**
 * main - fibonacci bellow 4m
 * Return: always 0
 */
int main(void)
{
	unsigned long first = 0, second = 1, next;
	float sum;

	while (1)
	{
		next = first + second;
		if (next > 4000000)
			break;
		if (next % 2 == 0)
			sum += next;
		first = second;
		second = next;
	}
	printf("%.0f\n", sum);
	return (0);
}
