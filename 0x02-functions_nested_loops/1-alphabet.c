#include "main.h"

/**
 * print_alphabet - Entry point
 * Description - 'print alphabet in lowercase'
 */

void print_alphabet(void);
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
