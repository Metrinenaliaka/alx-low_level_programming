#include "main.h"

/**
 * puts2- prints every other number and a new line
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
