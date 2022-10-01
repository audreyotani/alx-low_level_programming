#include "main.h"

/**
 * _puts - prototype
 * @str: String to be printed
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
