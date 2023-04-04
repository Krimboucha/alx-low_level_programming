#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to char
 * @c: character
 *
 * Return: pointer to char or NULL
 */

char *_strchr(char *s, char c)
{
	if (c == '\0')
	{
		while (*s != '\0')
		{
			s++;
		}
		return (s);
	}
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
