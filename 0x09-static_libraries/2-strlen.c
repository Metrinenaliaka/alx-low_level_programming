#include "main.h"

/**
 * _strlen- prints string length.
 * @s: string whose length is to be determined
 * Return: Integer
 *
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
