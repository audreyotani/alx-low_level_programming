#include "main.h"

/**
 * is_prime_number - prototype to search for prime numbers
 * @n: integer
 * Return: 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
