#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *@n: Number of parameters
 *@...: variable number of parameters
 *Return: sum, 0
 **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j = 0, sum = 0;
	va_list p;

	va_start(p, n);
	do {
		sum += va_arg(p, int);
		j++;
	} while (j < n);
	va_end(p);
	return (sum);
}
