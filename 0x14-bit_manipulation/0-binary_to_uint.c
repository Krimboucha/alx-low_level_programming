#include "main.h"

/** binary_to_uint - converts a binary to unsigned int
 * @b: pointer to char
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	result = 0;
	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result <<= 1;
		if (*b == '1')
			result += 1;
		b++;
	}
	return (result);
}
