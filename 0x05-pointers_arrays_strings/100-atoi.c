#include "main.h"

/**
* _atoi - converts a string to an integer.
* @s: input string.
* Return: integer.
*/
int _atoi(char *s)
{
	int i = 0, d = 0, n = 0, length = 0, f = 0, dt = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && f == 0)
	{
		if (s[i] == 45)
			++d;

		if (s[i] >= 48 && s[i] <= 57)
		{
			dt = s[i] - 48;
			if (d % 2)
				dt = -dt;
			n = n * 10 + dt;
			f = 1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

