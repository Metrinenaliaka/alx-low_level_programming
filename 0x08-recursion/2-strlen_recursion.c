#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - finds string length with recursion.
 * @s: string to find length.
 * Return: length of string.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	else
	{
		i = 1 + _strlen_recursion(s + 1);
		return (i);
	}
}

