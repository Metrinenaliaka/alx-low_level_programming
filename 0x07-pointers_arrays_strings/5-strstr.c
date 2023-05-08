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
	int ind1 = 0, indx2 = 0;

	for (; haystack[ind1] != '\0'; haystack++)
	{
		while (haystack[ind1] == needle[ind2] && needle[ind2] != '\0')
		{
			ind1++;
			ind2++;
		}
		if (needle[ind2] == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
