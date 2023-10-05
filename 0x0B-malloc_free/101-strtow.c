#include "main.h"

/**
 * _wordsCount - count words.
 * @s: pointer to strtoww function;
 * Return: Pointer.
 */
int _wordsCount(char *s)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				j++;
		}
		else if (i == 0)
			j++;
	}
	j++;
	return (j);
}

/**
 * strtow - split strings.
 * @str: string pointer.
 * Return: Pointer to main.
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, counter = 0;
	char **arrw;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = _wordsCount(str);
	if (n == 1)
		return (NULL);
	arrw = (char **)malloc(n * sizeof(char *));
	if (arrw == NULL)
		return (NULL);
	arrw[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			arrw[counter] = (char *)malloc(j * sizeof(char));
			j--;
			if (arrw[counter] == NULL)
			{
				for (k = 0; k < counter; k++)
					free(arrw[k]);
				free(arrw[n - 1]);
				free(arrw);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				arrw[counter][l] = str[i + l];
			arrw[counter][l] = '\0';
			arrw++;
			i += j;
		}
		else
			i++;
	}
	return (arrw);
}
