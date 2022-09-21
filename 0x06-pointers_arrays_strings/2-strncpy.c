#include "main.h"
#include <stdio.h>

/**
 * _strncpy - prototype
 * @dest: destination string
 * @src: source string
 * @n: bytes to be copied
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
