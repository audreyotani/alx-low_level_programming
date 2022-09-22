#include "main.h"

/**
 * leet - prototype
 * @ch: character
 * Return: address
 */

char *leet(char *ch)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(ch + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(ch + i))
			{
				*(ch + i) = b[j];
			}
		}
	}
	return (ch);
}
