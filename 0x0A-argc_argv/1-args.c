#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints its name
 * @argc: number of command line arguments
 * @argv: arrays of these arguments
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
