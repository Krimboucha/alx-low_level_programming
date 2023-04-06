#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: pointer to char
 *
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(char *s)
{
	int test;
	int len;

	len = strlen(s);
	if (len == 0 || len == 1)
	{
		return (1);
	}
	else if (s[0] != s[len - 1])
	{
		return (0);
	}
	else
	{
		s[len - 1] = '\0';
		test = is_palindrome(&s[1]);
		s[len - 1] = s[0];
		return (test);
    }
}
