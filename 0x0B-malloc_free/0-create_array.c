#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c: string
 * Return: char* or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	p = (char *)malloc(size * sizeof(char));
	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i <= size)
		{
			p[i] = c;
			i++;
		}
	}
	return (p);
}

