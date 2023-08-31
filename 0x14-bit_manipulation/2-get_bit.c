#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: integer
 * @index: index value
 * Return: index 0r -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int temp = 1 << index;

	if (index >= 64)
		return (-1);
	if ((n & temp) == 0)
	{
		return (0);
	}
	return (1);
}
