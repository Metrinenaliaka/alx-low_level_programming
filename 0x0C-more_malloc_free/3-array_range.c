#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: first int
 * @max: last int
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int i = min, min1, max2, y, length = 0, *p;

	if (min > max)
	{
		return (NULL);
	}
	do {
		length++;
		i++;
	} while (i <= max);
	p = (int *)malloc(length * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < length; y++)
	{
		p[y] = min + y;
	}
	min1 = p[0], max2 = p[0];
	for (y = 0; y < length; y++)
	{
		if (min1 > p[y])
		{
			min = p[y];
		}
		if (max2 < p[y])
		{
			max2 = p[y];
		}
	}
	return (p);
}
