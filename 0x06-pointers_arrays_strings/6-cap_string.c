#include "main.h"
#include <stdio.h>

/**
 * cap_string - prototype
 * @ch: character
 * Return: character
 */

char *cap_string(char *ch)
{
	int i = 0;

	for (; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 97 && ch[i] <= 122)
		{
			ch[i] = ch[i] - 32;
		}
	}
	return (ch);
}
