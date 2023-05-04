#include "main.h"

/**
 * *string_toupper - changes lowercase to uppercase
 * @str: string
 * Return:pointer to string
 */

char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
		}
	}
	return (str);
}
