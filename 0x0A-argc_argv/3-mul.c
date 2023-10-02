#include <stdio.h>
#include <stdlib.h>

/**
 * main - print Multiples of two strings.
 * @argc: arguement count.
 * @argv: arguement vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
