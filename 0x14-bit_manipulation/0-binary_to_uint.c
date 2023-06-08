#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to charrs 0 and 1
 * Return: number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary, rem, dec_number = 0, weight = 1;

	binary = atoi(b);
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
		rem = binary % 10;
		dec_number = dec_number + (rem * weight);
		binary = binary / 10;
		weight = weight * 2;
		b++;
	}
	return (dec_number);
}
