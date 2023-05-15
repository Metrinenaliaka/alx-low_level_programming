#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: s1 or NULL
 */
char *str_concat(char *s1, char *s2)
{       
        int size, i = 0;
	char *s3;
        
        size = (strlen(s1) + strlen(s2)) + 1;
        s3 = (char *)malloc(size * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		s3[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		s3[i] = *s2;
		s2++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}

