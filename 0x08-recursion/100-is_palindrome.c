#include "main.h"
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}

/**
 * is_palindrome - checks for a palidrome
 * @s: string to be checked
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
	char rev = _print_rev_recursion(s);

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
