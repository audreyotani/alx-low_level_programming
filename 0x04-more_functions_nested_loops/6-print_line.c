#include "main.h"

/**
 * print_line - prototype
 * @n: integer
 */

void print_line(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		_putchar('_');

		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
