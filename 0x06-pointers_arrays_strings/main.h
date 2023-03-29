#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/**
 * _strcat - concatenates two strings
 * @dest: pointer to char
 * @sr: pointer to char
 *
 * return: dest string
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 * @n: number of characters to concatenate from src
 * return: dest string
 */

char *_strncat(char *dest, char *src, int n);
#endif
