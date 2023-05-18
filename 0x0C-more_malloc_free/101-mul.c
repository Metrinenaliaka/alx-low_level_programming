#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
/**
 * main -  multiplies two positive numbers.
 * @num1: first number
 * @num2: second number
 * @mul: result
 * Return:
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if (!isdigit(num1) || !isdigit(num2))
	{
		printf("Error\n");
		exit(98);
	}
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);

}
