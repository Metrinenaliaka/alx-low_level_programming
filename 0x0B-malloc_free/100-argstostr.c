#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: length of arguments
 * @av: arguments of commands
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i = 0, len = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	do {
		len = len + strlen(av[i]);
		i++;
	} while (i < ac);
	len = len + ac + 1;
	p = (char *)malloc(len * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	p[0] = '\0';
	i = 0;
	do {
		strcat(p, av[i]);
		strcat(p, "\n");
		i++;
	} while (i < ac);
	return (p);
}
