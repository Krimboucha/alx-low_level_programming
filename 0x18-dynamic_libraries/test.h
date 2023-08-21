#ifndef MAIN_H
#define MAIN_H
/**
 * _isupper - checks if uppercase
 * @c: character to check
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
/**
 * _strlen - return length of string
 * @s: pointer to char
 *
 * Return: length number with null terminator
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * _puts - prints string followed by a new line to stdout
 * @str: pointer to char
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
/**
 * _strcat - concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 *
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
/**
 * _strncat - concatenates two strings up to n char
 * @dest: destination string
 * @src: src string
 * @n: number of char to be appended
 *
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}

	for (i = 0; i < n && src[i]; i++)
	{
		*ptr = src[i];
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
/**
 * _strncpy - copies n characters from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of char to be copied
 *
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to compare s1 to
 *
 * Return: 0 if s1 == s2, negative value if s1 < s2, positive value if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int counter;

	counter = 0;

	for (i = 0; s1[i]; i++)
	{
		counter += s1[i] - s2[i];
		if (s1[i] != s2[i])
			break;
	}
	return (counter);
}
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area to to which n bytes of src will be copied
 * @src: memory area from which n bytes will be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	return (dest);
}
/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte to fill the memory area
 * @n: the first n bytes of memory to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
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
/**
 * _strstr - finds the first occurrence of substring needle in string haystack
 * @haystack: string to be searched
 * @needle: string to be searched for
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *hptr;
	char *nptr;

	while (*haystack)
	{
		hptr = haystack;
		nptr = needle;
		while (*nptr && *nptr == *hptr)
		{
			hptr++;
			nptr++;
		}
		if (*nptr == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
/**
 * _strpbrk - locates the first occurrence in s of any of the bytes in accept
 * @s: string to be searched
 * @accept: string of characters to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strcpy - copies src to dest including null terminating char
 * @dest: pointer to char. destination string.
 * @src: pointer to char. src string.
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
/**
 * _atoi - converts a string to an integer.
 * @s: pointer to char
 *
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int num;
	int sign;
	int i;

	num = 0;
	sign = 1;
	i = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			num *= 10;
			num += (s[i] - '0');
		}
		else
		{
			if (num)
			{
				break;
			}
		}
		i++;
	}
	num *= sign;
	return (num);
}
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string that contains the set of characters to search for
 *
 * Return: length of initial segment of s that contains only chars from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int counter;
	int checker;

	counter = 0;
	for (i = 0; s[i]; i++)
	{
		checker = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				checker = 1;
			}
			if (accept[j + 1] == '\0' && checker == 0)
			{
				return (counter);
			}
		}
	}
	return (counter);
}
/**
 * _isalpha - checks if character is alphabet
 * @c: character to be chacked
 *
 * Return: 1 if character is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/**
 * _islower - checks if character is lowercase
 * @c: character to be checked
 *
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
/**
 * _abs - computes the absolute value of an integer.
 * @n: int to compute
 *
 * Return: absolute value of int
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
/**
 * _isdigit - checks if digit
 * @c: character to check
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if ('0' <= c && '9' >= c)
		return (1);

	return (0);
}
#endif
