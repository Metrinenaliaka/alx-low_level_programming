#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (array == NULL || f == NULL)
	{
		exit(98);
	}
	f(name);
}
