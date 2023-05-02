#include "main.h"

/**
 * print_rev- prints a string in reverse and a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	for (s[i] != '\0'; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
