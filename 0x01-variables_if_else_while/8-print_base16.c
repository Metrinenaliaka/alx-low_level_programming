#include <stdio.h>
/**
 * main-this program is for hex
 * Return:0
 */
int main(void)
{
	int i;

	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
