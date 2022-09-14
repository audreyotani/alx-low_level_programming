#include "main.h"

/**
 * print_last_digit - prototype
 * @n: Number printed
 * Description: 'Print last digit'
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		n = _abs(n);
		r = (n % 10);
		return (r);
	}
	else
	{
		r = (n % 10);
		return (r);
	}
}
