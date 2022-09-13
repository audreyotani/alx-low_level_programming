#include "main.h"

/**
 * print_last_digit - prototype
 * @n: Number printed
 * Description: 'Print last digit'
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');

	return (x);
}
