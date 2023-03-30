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

/**
 * _strncpy - copies a string
 * @dest: pointer to char
 * @src: pointer to char
 * @n: number of characters to copy
 *
 * return: dest string
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * int _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * 
 * Return: 0 if the two strings r similar, >0 if s1>s2 in ASCII, <0 if s1<s2 in ASCII
 */

int _strcmp(char *s1, char *s2);
#endif
