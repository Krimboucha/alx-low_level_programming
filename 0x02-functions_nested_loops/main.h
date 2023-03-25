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
/**
 * print_last_digit - print last digit of an int
 * @n: int
 *
 * Return: last digit of int
 */
int print_last_digit(int n);
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void);
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void);
/**
 * add - sum of two integers
 * @a: int
 * @b: int
 *
 * Return: a + b
 */
int add(int a, int b);
#endif
