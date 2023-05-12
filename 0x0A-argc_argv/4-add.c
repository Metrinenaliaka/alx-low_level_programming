#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints product addition
 *@argc: the size of commads
 *@argv: array of commands
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, add = 0;

	if (argc != 3)
	{
		printf("0\n");
	}
	while (i < argc)
	{
		if (!(*argv[i] >= '0' && *argv[i] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add = atoi(argv[1]) + atoi(argv[2]);
			printf("%d\n", add);
		}
		i++;
	}
	return (0);
}


