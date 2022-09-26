#include "main.h"

/**
 * _strchr - prototype to locate character in a string
 * @s: string
 * @c: character
 * Return: pointer to c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return ((s + i));
		}
	}
	return (0);
}
