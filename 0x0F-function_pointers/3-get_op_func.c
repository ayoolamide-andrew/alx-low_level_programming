#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - function pointer that selects the correct function to perform
 * the operation asked by the user
 *  @s: the operator given by the user
 *  Return: pointer to the function that corresponds to the
 *  operator given as the parameter
 */
int (*get_op_func(char *s))(int, int)
{
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

	while (ops[i].op != NULL && ops[i].f != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			break;
		i++;
	}

	return (ops[i].f);
}
