#include "main.h"

/**
 * *_memset- function fills memory with constant byte.
 * @b:value to be filled
 * @s:memory area to be filled
 * @n: bytes of the memory area to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(s + j) = b;
	}
	return (s);
}
