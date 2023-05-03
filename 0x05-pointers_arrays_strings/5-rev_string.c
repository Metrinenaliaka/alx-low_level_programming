#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int c = 0;
	int a;

	while (s[c] != '\0')
		c++;
	for (a = 0; a < c; a++)
	{
		c--;
		reverse = s[a];
		s[a] = s[c];
		s[c] = reverse;
	}
}
