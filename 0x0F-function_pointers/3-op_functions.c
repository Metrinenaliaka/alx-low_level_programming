#include "3-calc.h"
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds two integers
 * @a: first int
 * @b: second int
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two integers
 * @a: first int
 * @b: second int
 * Return: int
 */
int op_sub(int a, int b)
{
        return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: first int
 * @b: second int
 * Return: int
 */
int op_mul(int a, int b)
{
        return (a * b);
}
/**
 * op_div - subtracts two integers
 * @a: first int
 * @b: second int
 * Return: int
 */
int op_div(int a, int b)
{
        return (a / b);
}
/**
 * op_mod - subtracts two integers
 * @a: first int
 * @b: second int
 * Return: int
 */
int op_mod(int a, int b)
{
        return (a % b);
}
