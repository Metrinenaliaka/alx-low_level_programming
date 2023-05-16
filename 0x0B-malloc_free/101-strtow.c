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
	int ind1 = 0, strlgth = 0, start_str, end_str, ind2;
	char **words;

	if (str == NULL || str[ind1] == '\0')
	{
		return (NULL);
	}
	for (ind1 = 0; str[ind1] != '\0'; ind1++)
	{
		if (str[ind1] != ' ')
		{
			strlgth++;
		}
	}
	words = (char **)malloc((strlgth) * sizeof(char *));
	start_str = 0;
	ind2 = 0;
	for (ind1 = 0; str[ind1] != '\0'; ind1++)
	{
		if ((str[ind1] == ' ') || (start_str == 0))
		{
			start_str = ind1;
		}
		else if (str[ind1 + 1] == '\0' || str[ind1 + 1] == ' ')
		{
			end_str = ind1 + 1;
			words[ind2] = malloc((end_str - start_str));
			memcpy(words[ind2], &(str[start_str]), ((end_str - start_str)));
			ind2++;
		}
	}
	return (words);
}
