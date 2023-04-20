#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main to test
 * @argc: u know
 * @argv: u know this too
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	operation = get_op_func(argv[2]);
	printf("%d\n", operation(num1, num2));
	return (0);
}
