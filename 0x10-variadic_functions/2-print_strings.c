#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n:  number of strings passed to the function
 * @...: variadic variables
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *string;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);

}
