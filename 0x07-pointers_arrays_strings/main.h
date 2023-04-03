#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to char
 * @b: char
 * @n: unsigned int
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area
 * @dest: pointer to char
 * @src: pointer to char
 * @n: int
 * Return: pointer to char
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string
 * @s: pointer to char
 * @c: character
 *
 * Return: pointer to char or NULL
 */

char *_strchr(char *s, char c);

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to char
 * @accept: pointer to char
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept);

/**
 * set_string - sets the value of a pointer to a char 
 * @s: pointer to a char pointer
 * @ to: pointer to char
 *
 * Return: void
 */

void set_string(char **s, char *to);
#endif
