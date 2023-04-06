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
	/*char *p = s;*/

	len = _strlen_recursion(s);
	if (len == 0 || len == 1)
	{
		return (1);
	}
	if (s[0] != s[len - 1])
	{
		return (0);
	}
	s[len - 1] = '\0';
	test = is_palindrome(s + 1);
	return (test);
}
