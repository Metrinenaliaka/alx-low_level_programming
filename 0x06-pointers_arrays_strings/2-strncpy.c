#include "main.h"
#include <string.h>

/**
 * *_strncpy- function to work like strncpy
 * @dest: string one
 * @src: string two
 * @n: length of string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/*int len = strlen(dest);*/
	
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
