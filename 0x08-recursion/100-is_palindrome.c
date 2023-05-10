#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks for a palidrome
 * @s: string to be checked
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
	char rev = strsep(*s);

	if (*s == " ")
	{
		return (1);
	}
	if (rev == *s)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
