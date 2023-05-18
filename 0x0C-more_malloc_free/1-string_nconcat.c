#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2 used
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j = 0, i = 0, len1, len2;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	p = malloc(strlen(s1) + 1 + n);
	if (p == NULL)
	{
		return (NULL);
	}
	do {
		p[j] = s1[j];
		j++;
	} while (j < len1);
	for (i = 0; i < n; i++)
	{
		p[j + i] = s2[i];
	}
	p[j + i] = '\0';
	return (p);
}
