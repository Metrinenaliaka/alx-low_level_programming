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
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	int i = 1;

	while (i >= 1)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
