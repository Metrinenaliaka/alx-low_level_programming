#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: pointer
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}

	f(name);
	_putchar("\n");
}
