#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/**
 * _puts_recursion - that prints a string, followed by a new line
 * @s: pointer to char
 *
 * Return: void
 */

void _puts_recursion(char *s);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to char
 *
 * Return: void
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to char
 *
 * Return: int
 */

int _strlen_recursion(char *s);

/*
 * factorial - returns the factorial of a given number
 * @n: int
 *
 * Return: int
 */

int factorial(int n);

/**
 * _pow_recursion - returns x raised to the power of y
 * @x: int
 * @y: int
 * Return: int
 */

int _pow_recursion(int x, int y);

/**
 * real_function - checks if a number is prime
 * @n: int
 * @i: int
 *
 * Return: 1 if prime, 0 if not
 */

int real_function(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: int
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: pointer to char
 *
 * Return: 1 if it is, 0 if not
 */

int is_palindrome(char *s);

/**
 * real_sqrt - returns the natural square root of an int
 * @n: int
 * @i: int
 *
 * Return: -1 or int
 */

int real_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of an int
 * @n: int
 *
 * Return: -1 or int
 */

int _sqrt_recursion(int n);

/*
 * real_palindrome - checks if a string is palindrome
 * @s: pointer on char
 * @i: int
 *
 * Return: 1 if palindrome, 0 if not
 */

int real_palindrome(char *s, int i);
#endif
