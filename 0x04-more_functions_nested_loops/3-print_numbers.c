#include "main.h"

/**
 * print_numbers - prototype
 * Return: retuen value
 */

void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
