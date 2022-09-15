#include "main.h"

/**
 * print_square - prototype
 * @size: character
 */

void print_square(int size)
{
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c <= size; c++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
