#include "main.h"
#include <stdio.h>

/**
 * reverse_array - prototype
 * @a: array
 * @n: elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
	for (i = 0; i < n; i++)
	{
		a++;
	}
}
