#ifndef MATH_H_INCLUDED
#define MATH_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_endianness(void);
/** get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: unsigned index
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
