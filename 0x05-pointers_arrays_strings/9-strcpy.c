#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int s = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for ( s = 0; s < j ; s++)
	{
		dest[s] = src[s];
	}
	dest[j] = '\0';
	return (dest);
}
