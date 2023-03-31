#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer to char
 *
 * Return: string
 */

char *leet(char *s)
{
	int i;
	int j;
	char t1[6] = {'a', 'e', 'o', 't', 'l'};
	char t2[6] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (s[i] == t1[j] || s[i] == t1[j] - 32)
			{
				s[i] = t2[j];
			}
		}
	}

	return (s);
}
