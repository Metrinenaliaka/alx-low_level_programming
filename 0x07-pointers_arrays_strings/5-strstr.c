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
	int i = 0, j = 0;

	for (; haystack[i] != '\0'; haystack++)
	{
		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
