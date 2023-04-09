#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: pointer to char or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1;
	char *p2;

	while (*haystack != '\0')
	{
		p1 = haystack;
		p2 = needle;
		while (*p2 != '\0' && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
