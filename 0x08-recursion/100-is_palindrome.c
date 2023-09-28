#include "main.h"
#include <string.h>

/**
 * is_palindrome_string - compare.
 * @s: store char string.
 * Return: 0 and 1.
 */
int is_palindrome_string(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		return (is_palindrome_string(s + 1) + len);
	}
	return (len);
}
/**
 * check_palindrome - check and return palindrome.
 * @i: store ilteration value.
 * @len: store length.
 * @s: char string.
 * Return: 0 and 1.
 */
int check_palindrome(int i, int len, char *s)
{
	if (i >= len)
		return (1);
	else if (s[i] == s[len])
		return (check_palindrome(i + 1, len - 1, s));
	else
		return (0);
}
/**
 * is_palindrome - print palindrome.
 * @s: string character
 * Return: 0 and 1.
 */
int is_palindrome(char *s)
{
	int len = is_palindrome_string(s);
	int i = 0;

	return (check_palindrome(i, len - 1, s));
}
