#include <stdio.h>
/**
*main - program that prints all arguments it receives
*@argc: the size of commads
*@argv: array of commands
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}


