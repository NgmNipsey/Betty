#include "main.h"

/**
 * print_last_digit - lastdigit function
 *@x: int value of lastdigiit
 * Return: Always 0.
 */
int print_last_digit(int x)
{
	int lastD = x % 10;

	if (lastD < 0)
	{
		lastD = lastD * -1;
	}
	_putchar('0' + lastD);
	return (lastD);
}
