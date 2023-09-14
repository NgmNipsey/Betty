#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1, 2
 * Return: Always 0.
 */
int main(void)
{
	int lmt;
	unsigned long first = 0, second = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	for (lmt = 0; lmt < 92; lmt++)
	{
		sum = first + second;
		printf("%lu, ", sum);

		first = second;
		second = sum;
	}

	fib1_half1 = first / 10000000000;
	fib2_half1 = second / 10000000000;
	fib1_half2 = first % 10000000000;
	fib2_half2 = second % 10000000000;

	for (lmt = 93; lmt < 99; lmt++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (lmt != 98)
			printf(", ");

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
