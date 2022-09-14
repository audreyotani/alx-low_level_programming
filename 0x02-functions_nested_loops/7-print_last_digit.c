#include "main.h"

/**
 * print_last_digit - prototype
 * @n: Number printed
 * Description: 'Print last digit'
 * Return: Last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	_putchar((n % 10) + '0');
	return ((n % 10) + '0');
}
