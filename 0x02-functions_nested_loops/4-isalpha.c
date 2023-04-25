#include "main.h"
/**
 * _isalpha-check if character is lowercase or uppercase
 * @c:character lower/uppercase.
 * Return:1-if lowercase/uppercase,0-if not.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
