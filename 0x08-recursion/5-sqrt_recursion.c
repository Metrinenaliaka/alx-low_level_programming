#include "main.h"
#include <math.h>
/**
* _sqrt_recursion - find square root
* @n: integer to be used
* Return: Return squareroot or -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_recursion(n, 1));
	}
}

/**
 * sqrt_recursion - function that recurses to find the natural
 * square root of a number
 * @n: integer to the check the square root
 * @num: iterates
 * Return: square root
 */

int sqrt_recursion(int n, int num)
{
	if (num * num > n)
	{
		return (-1);
	}
	else if (num * num == n)
	{
		return (num);
	}
	else
	{
		return (sqrt_recursion(n, num + 1));
	}
}
