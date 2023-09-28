#include "main.h"

/**
 * _sqrt_recursion - print square of a number.
 * @n: store value;
 * @value: store value to be returned.
 * Return: value.
 */
int sqr(int value, int n);
int _sqrt_recursion(int n)
{
	return (sqr(1, n));
}

/**
 * sqr - calculate the square.
 * @value: store value to be returned.
 * @n: store number.
 * Return: Results.
 */
int sqr(int value, int n)
{
	if (value * value == n)
		return (value);
	else if (value * value < n)
		return (sqr(value + 1, n));
	else
		return (-1);
}
