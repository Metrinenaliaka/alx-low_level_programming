#include "main.h"

/**
 * is_prime_number - finds prime number
 * @n: Integer to be used
 * Reteun: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n == 0 || n == 1)
	{
		return (0);
	}
	else if (i == n)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number(n));
	}
}	
