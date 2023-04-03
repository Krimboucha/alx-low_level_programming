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
#endif
