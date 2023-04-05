#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/**
 * _puts_recursion - that prints a string, followed by a new line
 * @s: pointer to char
 *
 * Return: void
 */

void _puts_recursion(char *s);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to char
 *
 * Return: void
 */

void _print_rev_recursion(char *s);
#endif
