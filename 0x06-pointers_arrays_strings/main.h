#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/**
 * _strcat - concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
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

/**
 * reverse_array - reverses an array
 * @a: pointer to int array
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer to char
 *
 * Return: uppercase string
 */

char *string_toupper(char *s);

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to char
 *
 * Return: string
 */

char *cap_string(char *s);

/**
 * leet - encodes a string into 1337
 * @s: pointer to char
 *
 * Return: string
 */

char *leet(char *s);

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to char
 *
 * Return: string
 */

char *rot13(char *s);
#endif
