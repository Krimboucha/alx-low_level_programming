#include "main.h"
#include <string.h>
int real_palindrome(char *s, int i);

/**
 * real_palindrome - checks if a string is palindrome
 * @s: pointer on char
 * @i: int
 *
 * Return: 1 if palindrome, 0 if not
 */

int real_palindrome(char *s, int i)
{
	int len;

	len = strlen(s);
	if (len == 0 || len == 1)
	{
		return (1);
	}
	if (*s != s[len - i])
	{
		return (0);
	}
	else
	{
		return (real_palindrome(s + 1, i + 1));
	}
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: pointer to char
 *
 * Return: 1 if it is, 0 if not
 */

int is_palindrome(char *s)
{
	return (real_palindrome(s, 1));
}
