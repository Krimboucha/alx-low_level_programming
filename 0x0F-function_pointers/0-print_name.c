#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: pointer to char
 * @f: pointer to a function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		(*f)(name);
}
