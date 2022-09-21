#include "main.h"
#include <stdio.h>

/**
 * _strncat - prototype
 * @dest: destination string
 * @src: source string
 * @n: bytes to append
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
