#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2d  array of integers.
 * @width: columns
 * @height: rows
 * Return: pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int **p, i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for(i = 0; i < height; i++)
		{
			p[i] = (int *)malloc(width * sizeof(int));
			if (p[i]== NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(p[j]);
				}
				free(p);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				p[i][j] = 0;
			}
		}
	}
	return (p);
}


