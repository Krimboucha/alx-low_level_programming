#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * op_add - adds two numbers
 * @a: int
 * @b: int
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction
 * @a: int
 * @b: int
 *
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplicates two numbers
 * @a: int
 * @b: int
 *
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: int
 * @b: int
 *
 * Return: int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: division by zero\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - does what mod does to two numbers
 * @a: int
 * @b: int
 *
 * Return: int
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: modulo by zero\n");
		exit(100);
	}
	return (a % b);
}

