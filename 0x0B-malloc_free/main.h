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

/** str_concat - concatenates two strings
 * @s1: pointer to char
 * @s2: pointer to char
 *
 * Return: pointer to char
 */

char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: int
 * @height: int
 *
 * Return: pointer to pointer on int
 */

int **alloc_grid(int width, int height);

/** free_grid - frees a 2 dimensional grid
 * @grid: pointer to a 2 dimensional array
 * @height: int
 *
 * Return: void
 */

void free_grid(int **grid, int height);
#endif
