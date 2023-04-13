#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b);
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to char
 * @s2: pointer to char
 * @n: unsigned int
 *
 * Return: pointer to char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area to to which n bytes of src will be copied
 * @src: memory area from which n bytes will be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
#endif
