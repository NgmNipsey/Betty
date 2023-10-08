#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - check is string is valid positive number.
 * @s: pointer to string.
 * Return: 0 and 1.
 */
int is_number(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
/**
 * _atoi - convert string to unsigned long int.
 * @s: string to a pointer.
 * Return: An interger.
 */
unsigned long int _atoi(char *s)
{
	unsigned long int n = 0;
	int i;
	
	for (i = 0; s[i]; i++)
	{
		n = n * 10 + (s[i] - '0');
	}
	return (n);
}
/**
 * mul - takes two argument and multiply.
 * @a: first argument.
 * @b: second argument.
 * Return: Results.
 */
void mul(unsigned long int a, unsigned long int b)
{
	unsigned long int results = 0, i;

	for (i = 0; i < b; i++)
	{
		results += a;
	}
	printf("%lu\n", results);
}
/**
 * main - takes two arguments and call the other functions.
 * @argc: counter.
 * @argv: vector.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	unsigned long int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mul(num1, num2);
	return (0);
}
