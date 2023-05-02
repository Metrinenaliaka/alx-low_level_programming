#include "main.h"

/**
 * swap_int- function swaps two intergers.
 * @a:first integer
 * @b:second integer
 *
 */

void swap_int(int *a, int *b)
{
	int pt = *b;
	*b = *a;
	*a = pt;
}
