#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
/**
 * _putchar - writes "_putchar"
 * 
 * Return 0
 */
int _putchar(char c);
/**
 * print_alphabet - prints the alphabet in lower case
 *
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints the alphabet in lower case 10 times
 */
void print_alphabet_x10(void);
/**
 * _islower - checks if character is lowercase
 * @c: character to be checked
 *
 * Return: 1 for lowercase or 0 if not
 */
int _islower(int c);
/**
 * _isalpha - checks if character is alphabet
 * @c: character to be checked
 *
 * Return: 1 if character is alphabet, 0 if not
 */
int _isalpha(int c);
/**
 * print_sign - prints sign based on input
 * @n: number to check
 *
 * Return: 1if positive, 0 if zero or -1 if negative
 */
int print_sign(int n);
/**
 * _abs - computes the absolute value of an integer
 * @n: int to compute
 *
 * Return: absolute value of n
 */
int _abs(int n);
#endif
