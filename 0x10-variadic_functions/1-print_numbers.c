#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prototype
 * @separator: string to be printed between numbers
 * @n: number of integers
 * Return: 0 success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int print;
	va_list printnum;

	va_start(printnum, n);

	for (x = 0; x < n; x++)
	{
		print = va_arg(printnum, int);
		printf("%d", print);
		if (separator != NULL && x != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(printnum);
}
