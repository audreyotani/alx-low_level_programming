#include "main.h"

/**
 * swap_int - prototype
 * @a: integer one
 * @b: integer two
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
