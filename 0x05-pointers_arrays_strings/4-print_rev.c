#include "main.h"

/**
 * print_rev- prints a string in reverse and a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			break;
		i++;
		}
	}
	for (i--; i >= 0; i--)
		_putchar(s[i]);

	-putchar('\n');
}
