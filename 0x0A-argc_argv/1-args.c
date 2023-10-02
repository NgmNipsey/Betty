#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguement passed.
 * @argc: arguement count.
 * @argv: arguement vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
