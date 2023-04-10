#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name
 * @argc: number of command line arguments
 * @argv: arrays of these arguments
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
