#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: value whose memory is to be allocated.
 * Return: pointer or 98
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p != NULL)
	{
		return (p);
	}
	exit(98);
	free(p);

}
