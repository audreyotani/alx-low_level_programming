#include "main.h"

/**
 * print_diagonal - prototype
 * @n: character
 */

void print_diagonal(int n)
{
	int b;

	for (b = 0; b <= n; b++)
	{
		_putchar(92);
	
		if (n <= 0)
		{
			_putchar('\n');
		}
	_putchar('\n');
	}
}
