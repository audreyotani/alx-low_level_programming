#include "main.h"

/**
 * _strspn -prototype to get length
 * @s: string to check
 * @accept: string to check
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
	}
	return (count);
}
