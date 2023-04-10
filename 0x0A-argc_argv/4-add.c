#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: arrays of these arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int sum;
	int i;
	int j;

	sum = 0;
	i = 1;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i  < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
