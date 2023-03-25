#include <stdio.h>

/**
 * main - main function
 *
 * Return 0
*/

int main(void)
{
	long int n;
	long int factor;
	long int largest_factor;

	n = 612852475143;
	factor = 2;
	largest_factor = 0;
	while (n > 1)
	{
		if (n % factor == 0)
		{
			n /= factor;
			largest_factor = factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", largest_factor);
	return (0);
}
