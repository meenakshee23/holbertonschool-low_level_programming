#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func -selects the correct function to perform the operation
 * @s: the operator passed as argument
 *
 * Return: pointer to the function corresponding to the operator,
 *         or NULL if operator is not recognized
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
	int i = 0;

	while (ops[i].op)
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
