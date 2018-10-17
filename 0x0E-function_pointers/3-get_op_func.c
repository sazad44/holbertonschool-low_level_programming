#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: the operator passed into the function indicating the function to use
 * Return: a pointer to the function to be used
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}
