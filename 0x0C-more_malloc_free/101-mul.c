#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  multiplies two positive numbers.
 * @num1: first number
 * @num2: second number
 * @mul: result
 * Return: 
 */

int main(int argc, char *argv[])
{
	int * num1, num2;
	int mul, i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	for (i = 0; num1[i] != '\0' && num2[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			exit(98);
		}
		if (!isdigit(num2[i]))
                {
                        printf("Error\n");
                        exit(98);
                }
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);

}
