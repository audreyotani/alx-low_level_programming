#include "main.h"

/**
 * print_line - prototype
 * @n: integer
 */

void print_line(int n)
{
	int a;

	if (n >= 1)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
