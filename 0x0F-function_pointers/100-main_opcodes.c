#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes.
 * @argc: counts
 * @argv: vector.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int mbytes, i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	mbytes = atoi(argv[1]);
	if (mbytes < 0)
		printf("Error\n"), exit(2);
	array = (char *)main;
	for (i = 0; i < mbytes; i++)
	{
		if (i == mbytes - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
