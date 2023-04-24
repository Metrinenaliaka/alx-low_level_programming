#include <stdio.h>

/**
 *main-program for upper and lower case.
 *Return:0
 **/
int main(void)
{
	char i;
	char j;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
