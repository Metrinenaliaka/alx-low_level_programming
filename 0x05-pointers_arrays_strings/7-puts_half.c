#include "main.h"
/**
 *puts_half- prints half of the string
 *@str: string to be used
 */
void puts_half(char *str)
{
	int s = 0, z, l = 0;

	while (str[s] != '\0')
	{
		l++;
		s++;
	}
	z = l / 2;
	if ((l % 2) == 1)
	{
		z = ((l + 1) / 2);
	}
	for (s = z; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
