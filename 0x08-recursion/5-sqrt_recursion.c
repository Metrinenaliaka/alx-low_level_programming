#include "main.h"
#include "math.h"
/**
* _sqrt_recursion - find square root
* @n: integer to be used
* Return: Return squareroot or -1
*/
int _sqrt_recursion(int n, int num)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (num * num == n)
	{
		return (num);
	}
	else
	{
		return (_sqrt_recursion(n, num - 1));
	}
}
