#include "main.h"

/**
 * rev_string - PROTOTYPE
 * @s: character pointer
 */

void rev_string(char *s)
{
	int i, len, temp;
	char *a, b;

	a = s;
	while (s[len] != '\0')
	{
		len++;
	}
	for (temp = 1; temp < len; temp++)
	{
		a++;
	}
	for (i = 0; i < (len / 2); len++)
	{
		b = s[i];
		s[i] = *a;
		*a = b;
		a--;
	}
}
