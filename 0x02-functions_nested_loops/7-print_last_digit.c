#include "main.h"

/**
 * print_last_digit - print last digit
 * Return: last digit
 * @n: integer
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	_putchar((n % 10) + '0');

	return (n % 10);
}
