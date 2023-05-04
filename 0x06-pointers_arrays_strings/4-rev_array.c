#include "main.h"

/**
 * reverse_array- reverses array contents
 * @a: array to be reversed
 * @n: number of elements in an array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int value;

	for (i = 0; i <= n--; i++)
	{
		value = a[i];
		a[i] = a[n - 1];
		a[n] = value;
	}
}
