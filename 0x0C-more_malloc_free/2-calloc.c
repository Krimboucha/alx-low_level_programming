#include <stdlib.h>
#include <string.h>
char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: pointer to array
 */
void* _calloc(unsigned int nmemb, unsigned int size)
{
	void* ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);
	return (ptr);
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
