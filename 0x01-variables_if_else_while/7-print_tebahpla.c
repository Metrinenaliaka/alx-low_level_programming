#include <stdio.h>
/**
 * main-printing alphabets in reverse
 * Return:0.
 */
int main(void)
{
	char i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

