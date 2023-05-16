#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to string or NULL
 */
char **strtow(char *str)
{
	int counts = 0, i, j, k;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			counts++;
	}
	words = (char **)malloc((counts + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0, j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			int lgth = 0;

			k = i;
			while (str[k] != ' ' && str[k] != '\0')
			{
				lgth++, k++;
			}
			words[j] = (char *)malloc((lgth + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				while (j > 0)
					return (NULL);
			}
			for (k = 0; k < lgth; k++, i++)
				words[j][k] = str[i];
			array[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	return (words);
}
