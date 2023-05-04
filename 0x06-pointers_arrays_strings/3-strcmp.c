#include "main.h"
#include <string.h>

/**
 * _strcmp- compares two strings
 * @s1: string one
 * @s2: string two.
 * Return: integer value
 */
int _strcmp(char *s1, char *s2)
{
	int value;

	value = strcmp(s1, s2);
	if (value == 0)
	{
		return (0);
	}
	else
	{
		return (value);
	}
}

