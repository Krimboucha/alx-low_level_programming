#include "main.h"

/**
 * _isalpha - checks if character is alphabet
 * @c: character to be checked
 *
 * Return: 1 if character is alphabet, 0 if not
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
