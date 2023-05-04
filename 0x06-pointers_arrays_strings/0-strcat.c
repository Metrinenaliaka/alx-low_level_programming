#include "main.h"

/**
 * *_strcat- function concatenates two strings.
 * @dest:first string
 * @src: second string.
 * Return: Returns dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
