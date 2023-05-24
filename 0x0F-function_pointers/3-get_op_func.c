#include "3-calc.h"
#include <stdlib.h>
/**
 *get_op_func - pointer function
 *@s: string to be passed
 *Return: pointer
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

	if ((*s != 43 && *s != 45 && *s != 42 && *s != 47 && s[i] != 37))
	{
		return (NULL);
	}
	while (ops[i].op != NULL)
	
		i++;
	}
	return (ops[i].f);
}
