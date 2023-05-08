#include <unistd.h>
#include "main.h"
/**
* _putchar- writes the charachter c to stdout
* @c: to be printed
*
* Return: 1 if successful
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}

