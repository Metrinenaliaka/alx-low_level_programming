#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: value
 * @m: index
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp, count = 0;

	temp = n ^ m;
	do {
		count += (temp & 1);
		temp >>= 1;
	} while (temp > 0);
	return (count);
}
