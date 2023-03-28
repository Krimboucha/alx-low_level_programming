#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/**
 * reset_to_98 - resets pointer to 98
 * @a: first pointer to int to switch
 * @b: second pointer to int to switch
 * Return void
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 * @n: pointer to int
 * return: void
 */

void swap_int(int *a, int *b);
/**
 * _strlen - return length of string
 * @s: pointer to char
 *
 * Return: length of string
 */
int _strlen(char *s);

/**
 * _puts - prints a string followed by a new
 * @str: pointer to char
 * Return: void
 */

void _puts(char *str);
/**
 * _putchar - writes the character c
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

/**
 * print_rev - prints string in reverse
 * @s: pointer to char
 * Return: void
 */

void print_rev(char *s);
#endif
