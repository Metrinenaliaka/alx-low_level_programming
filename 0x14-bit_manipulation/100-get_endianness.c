#include "main.h"
/**
 * get_endianness -  checks the endianness.
 * Return: 0- big endian 1- little endian
 */
int get_endianness(void)
{
	int s = 1;
	int endianness;
	char *p = (char *)&s;

	switch (*p)
	{
		case 1:
			endianness = 1;
			break;
		default:
			endianess = 0;
			break;
	}
	return (endianness);
}
