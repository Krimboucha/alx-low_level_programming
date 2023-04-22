#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdarg.h>
#include <stddef.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: int
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: pointer to char
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...);
/**
 * print_strings - prints a string
 * @separator: char
 * @n: int
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...);
#endif
