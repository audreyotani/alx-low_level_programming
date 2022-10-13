#include "function_pointers.h"

/**
 * print_name - prototype to print name
 * @name: string character
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
