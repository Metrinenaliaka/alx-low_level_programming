#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to charrs 0 and 1
 * Return: number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary, rem, dec_number = 0, weight = 1;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		dec_number = (dec_number << 1) + (*b - '0');
		b++;
	}
	return (dec_number);
}
