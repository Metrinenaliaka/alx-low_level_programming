#include "main.h"
#include <string.h>
/**
* *_strncat - concatenates two strings with n bytes.
* @dest: string one
* @src: string two
* @n: n bytes to be used
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, lgth;

	lgth = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[lgth + i] = src[i];
	}
	dest[lgth + i] = '\0';
	return (dest);
}

