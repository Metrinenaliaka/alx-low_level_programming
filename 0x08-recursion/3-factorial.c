#include "main.h"

/**
 * factorial - factorial of a number
 * @n: given number
 * Return: Factorial otherwise return -1.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	else
		return(n * factorial(n-1));
}
