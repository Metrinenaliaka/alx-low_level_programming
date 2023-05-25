#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed 
 * to the function
 * @...: variadic variables
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *separator = "";
	va_list all;

	va_start(all, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(all, int));
				break;
			case 'i':
				printf("%s%i", separator, va_arg(all, int));
                                break;
			case 's':
				string = va_arg(all, char*);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", separator, string);
                                break;
			case 'f':
				printf("%s%f", separator, va_arg(all, double));
                                break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(all);
}
