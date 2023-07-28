#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>
/** _strtok: tokenize
 * @str: string
 * @delim: const string
 *
 * Return: string
 */

char *_strtok(char *str, const char* delim)
{
	static char *token = NULL;
	char *newstr;
	int delimCheck;

	delimCheck = 1;
	if (str == NULL)
		str = token;
	while (*str)
	{
		if (_strchr(delim, *str) == NULL)
		{
			delimCheck = 1;
			break;
		}
		delimCheck = 0;
		str++;
	}
	if (*str == '\0')
	{
		token = str;
		return (NULL);
	}
	newstr = str;
	while (*str != '\0')
	{
		if (_strchr(delim, *str) != NULL)
		{
			*str = '\0';
			token = str +1 ;
			return newstr;
		}
		str++;
	}
	token = str;
	return newstr;
}
/**
 * _strchr - locates a character in a string
 * @s: string to locate a character in
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
int main() {
	char str[] = "ls -a  -l";
	const char delim[] = " \n\t";
	char* token = _strtok(str, delim);
	while (token != NULL) {
		printf("%s\n", token);
		token = _strtok(NULL, delim);
		}
	return 0;
	}
