#include "main.h"

/**
 * rev_string - PROTOTYPE
 * @s: character pointer
 */

void rev_string(char *s)
{
	int len = 0, temp = 0;
	char b;

	while (s[temp++])
	{
		len++;
	}
	for (temp = len - 1 ; temp >= len; temp++)
	{
		b = s[temp];
		s[temp] = s[len - temp - 1];
		s[len - temp - 1] = b;
	}
}
