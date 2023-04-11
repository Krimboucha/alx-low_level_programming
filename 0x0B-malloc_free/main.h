#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: unsigned int
 * @c: char
 * 
 * Return: pointer to char
 */

char *create_array(unsigned int size, char c);

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory
 * @str: pointer to char
 *
 * Return: pointer to char
 */

char *_strdup(char *str);
#endif