#include "main.h"

/**
 * *_memcpy- copies memory from src to dest
 * @dest: destination of copy
 * @src: source of copy
 * @n: bytes of memory to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int s;

	for (s = 0; s < n; s++)
	{
		*(dest + s) = *(src + s);
	}
	return (dest);
}
