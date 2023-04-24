#include <stdio.h>
/**
 * main-printing alphabets in order.
 * Return:0.
 */
int main(void)
{
	char a_z;

	putchar("Alphabets from a - z are: \n");
	for (a_z = 'a'; a_z <= 'z'; a_z++)
	{
		putchar("%c\n", a_z);
	}
	return (0);
}
