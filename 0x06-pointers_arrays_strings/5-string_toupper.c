#include "main.h"
#include <stdio.h>

/**
 * string_toupper - prototype
 * @ch: character
 * Return: character
 */

char *string_toupper(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 97 && ch[i] <= 122)
		{
			ch[i] = ch[i] - 32;
		}
	}
	return (ch);
}
