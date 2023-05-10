#include "main.h"

/**
 * _pow_recursion - finds the power of a number
 * @x: integer one
 * @y: integer to raise
 * Return: return x otherwise return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
