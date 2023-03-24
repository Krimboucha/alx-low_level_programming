#include "main.h"
/**
 * _idigit - checks if character is
 * a digit (0-9) or not.
 * @c: character to check
 * Return: 1 or 0
 */
int _isdigit(int c)
{

	return ('0' <= c && '9' >= c);	
}
