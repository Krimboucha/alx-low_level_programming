#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stddef.h>

/**
 * print_name - function that prints a name
 * @name: pointer to char
 * @f: pointer to a function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - function that executes a function given as a
 *  parameter on each element of an array.
 * @size: size of the array
 * @array: pointer to int
 * @action: pointer to the function to call
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int));
#endif
