#include "main.h"

/**
 * _sqrt_recursion - prototype to return natural square root
 * @n: integer to return square root
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt_recursion(n - 1));
	}
}
