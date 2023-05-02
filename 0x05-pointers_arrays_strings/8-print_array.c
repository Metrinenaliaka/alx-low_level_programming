#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers.
* @a: array.
* @n: input elements
*/
void print_array(int *a, int n)
{
	int s = 0;

	for (s = 0; s < n; s++)
	{
		printf("%d", *(a + s));
		if (s != (n - 1))
			printf(", ");
	}
	printf("\n");
}

