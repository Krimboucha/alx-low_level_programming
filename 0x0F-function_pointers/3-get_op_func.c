#include "calc.h"
#include <stddef.h>
/**
 * get_op_func - selects the correct function
 * to perform the operation asked by the user
 * @s: operator
 *
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	int (*operation)(int, int);
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
		{
			operation = ops[i].f;
			return (operation);
		}
		i++;
	}
	return (NULL);
}
