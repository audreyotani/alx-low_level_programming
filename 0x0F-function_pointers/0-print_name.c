#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prototype to print name
 * @name: string character
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

	f(name);
}
