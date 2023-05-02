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
	int i;

	for (i = 0; *s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
