#include "main.h"

/**
 * _strpbrk - prototype to search for a string
 * @s: string 1
 * @accept: string 2
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return ((s + i));
		}
	}
	return (0);
}
