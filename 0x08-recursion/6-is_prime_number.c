#include "main.h"

/**
 * is_prime_number - check prime number.
 * @n: store number.
 * @i: for ilterations.
 * Return: Invoke functions to main.
 */
int is_prime(int n, int i);
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - check for prime number.
 * @n: store number.
 * @i: for ilteration.
 * Return: Prime number.
 */
int is_prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (is_prime(n, i + 1));
}
