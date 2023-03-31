#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to char
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int i;
	int j;
	char tab[15] = {' ', '\t', '\n', ',', '.', ';', '!', 
		'?', '"', '(', ')', '{', '}', '\0'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (j = 0; j < 14; j++)
			{
				if (s[i - 1] == tab[j])
				{
					s[i] -= 32;
					break;
				}
			}
		}
	}
	return (s);
}
