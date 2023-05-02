#include "main.h"

/**
 * _puts- prints a string and a new line
 * @str: string to be printed
 */
void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
		}
		_putchar(str[i]);
		i++;
	}
}
