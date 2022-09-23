#include "main.h"
#include <stdio.h>

/**
 * infinite_add - prototype
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 * Return: pointer to dest
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, a, b, c, d, add = 0;

	while (*(n1 + c1) != '\0')
		c1++;
	while (*(n2 + c2) != '\0')
		c2++;
	if (c1 >= c2)
		b = c1;
	else
		b = c2;
	if (size_r <= b + 1)
		return (0);
	r[b + 1] = '\0';
	c1--, c2--, size_r--;
	c = *(n1 + c1) - 48, d = *(n2 + c2) - 48;
	while (b >= 0)
	{
		a = c + d + add;
		if (a >= 10)
			add = a / 10;
		else
			add = 0;
		if (a > 0)
			*(r + b) = (a % 10) + 48;
		else
			*(r + b) = '0';
		if (c1 > 0)
			c1--, c = *(n1 + c1) - 48;
		else
			c = 0;
		if (c2 > 0)
			c2--, d = *(n2 + c2) - 48;
		else
			d = 0;
		b--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
