#include "main.h"

/**
 * print_rev - prototype
 * @s: charcater
 */

void print_rev(char *s)
{
	int a = 0, index;

	while (s[index++])
	{
		a++;
	}
	for (index = a - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
