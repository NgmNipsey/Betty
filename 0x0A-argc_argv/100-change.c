#include <stdio.h>
#include <stdlib.h>

/**
 * convertCoins - converts values given
 * @j: ilteration.
 * Return: Counter.
 */
int convertCoins(int j)
{
	int counter = 0;

	while (j != 0)
	{
		if (j % 10 == 9 || j % 10 == 7)
			j -= 2;
		else if (j % 25 == 0)
			j -= 25;
		else if (j % 10 == 0)
			j -= 10;
		else if (j % 5 == 0)
			j -= 5;
		else if (j % 2 == 0)
		{
			if (j % 10 == 6)
				j -= 1;
			else
				j -= 2;
		}
		else
			j -= 1;

		counter++;
	}

	return (counter);
}
/**
 * main - print minimum number of coins per amount.
 * @argc: arguement count.
 * @argv: arguement vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
		printf("0\n");
	else
	{
		coins = convertCoins(i);

		printf("%d\n", coins);
	}

	return (0);
}
