#include "main.h"

/**
 * _islower - entry point
 * Description: 'checking for lowercase'
 * @c: character
 * Return: Always (1) Success
 */

int _islower(int c)
{
	char ch = 'c';

	if (ch >= 'a' && ch <= 'z')
	{
		_putchar((1 % 10) + '0');
	}
	else
	{
		_putchar((0 % 10) + '0');
	}
}
