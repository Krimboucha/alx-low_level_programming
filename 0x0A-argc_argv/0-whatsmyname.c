#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name
 * @argc: number of command line arguments
 * @argv: arrays of these arguments
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc-argc]);
	return (EXIT_SUCCESS);
}
