#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to char
 * @accept: pointer to char
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int c;

	c = 0;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return (c);
		}
		i++;
		j = 0;
	}
	return (c);
}
