#include "main.h"
#include <string.h>

/**
 * _strstr - function finds the first occurrence of the substring
 * @haystack: string to be checked
 * @needle: substring to be checked
 * Return: needle or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int ind1 = 0, ind2 = 0;
	//char result = strstr(*haystack, *needle);

	while ((haystack[ind2] != '\0') || (needle[ind1] != '\0'))
	{
		if (needle[ind1] != haystack[ind2])
		{
			ind2++;
			ind1 = 0;
		}
		else
		{
			ind2++;
			ind1++;
		}
	}
	if (needle[ind1] == '\0')
	{
		return (needle);
	}
	else
	{
		return (NULL);
	}
}
