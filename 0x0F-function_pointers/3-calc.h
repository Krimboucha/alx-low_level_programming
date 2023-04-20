#ifndef CALC_H
#define CALC_H

/**
 * struct op - op struct
 * @op: pointer to char
 * @f: pointer to function
 */

typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/**
 * op_add - adds two numbers
 * @a: int
 * @b: int
 *
 * Return: int
 */

int op_add(int a, int b);
/**
 * op_sub - substraction
 * @a: int
 * @b: int
 *
 * Return: int
 */

int op_sub(int a, int b);

/**
 * op_mul - multiplicates two numbers
 * @a: int
 * @b: int
 *
 * Return: int
 */

int op_mul(int a, int b);
/**
 * op_div - divides two numbers
 * @a: int
 * @b: int
 *
 * Return: int
 */

int op_div(int a, int b);

/**
 * op_mod - does what mod does to two numbers
 * @a: int
 * @b: int
 *
 * Return: int
 */

int op_mod(int a, int b);
/**
 * get_op_func - selects the correct function
 * to perform the operation asked by the user
 * @s: operator
 *
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int);
#endif
