#include "main.h"
#include "string.h"

/**
 * _strchr- locates the first occurence of a charachter
 * @s: string to be checked
 * @c: charachter we are locating
 * Return: sif character is found or Null otherwise
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return &s[i];
		}
	}
	return (NULL);
}
