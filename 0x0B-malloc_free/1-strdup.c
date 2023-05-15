#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup-  returns a duplicate pointer to a new string
 * @str: string to be duplicated
 * Return: *str or NULL
 */
char *_strdup(char *str)
{
	int size, i = 0;
	char *str1;

	size = strlen(str) + 1;
	str1 = (char *)malloc(size * sizeof(char));
	if (str == NULL || str1 == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(str1 + i) = *(str + i);
		i++;
	}
	return (str1);
}
