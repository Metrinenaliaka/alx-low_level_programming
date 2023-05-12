#include <stdio.h>
#include "main.h"

/**
 *main - prints its name, followed by a new line
 *@argc: the size of commads
 *@argv: array of commands
 *Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
