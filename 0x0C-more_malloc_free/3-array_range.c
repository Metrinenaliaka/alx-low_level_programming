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
	int i = min, y, length = 0, *p;

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
	min = p[0], max = p[0];
	for (y = 0; y < length; y++)
	{
		if (min > p[y])
		{
			min = p[y];
		}
		if (max < p[y])
		{
			max = p[y];
		}
		p[y] = min + y;
	}
	return (p);
}
