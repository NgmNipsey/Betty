#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - a functio to print opcode.
 * @n: length.
 *
 * Return: void.
 */
void print_opcodes(int n)
{
	int i;
	char *p = (char *)print_opcodes;

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
		printf("%02hhx ", p[i]);
	printf("\n");
}

/**
 * main - print opcodes.
 * @argc: counts
 * @argv: vector.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	print_opcodes(atoi(argv[1]));
	return (0);
}
