#include "main.h"
#include <stdlib.h>
#include <string.h>

/*
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to string or NULL
 */

char **strtow(char *str)
{
	int i = 0, len;
	char p = ' ';
	char ** s;
	char word = {};

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	len = strlen(str) + 1;
	s = (char **)malloc(len * sizeof(char*));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] == '\0'; i++)
	{
		if (str[i] != p)
		{
			word = str[i];
		}
		else
		{
			continue;
		}
	}
	return (s);
}
