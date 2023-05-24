#include "3-calc.h"
#include <stdlib.h>
/**
 *get_op_func - pointer function
 *@s: string to be passed
 *
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

	if (s != "+" && s != "-" && s != "*" && s != "/" && s != "%")
	{
		return (NULL);
	}
	while (ops[i] != NULL)
	{
		get_op_func(char *s))(int, int);
		i++;
	}
}
