#include "main.h"

/**
 * *_strcpy - prototype
 * @dest: destination pointer
 * @src: origin pointer
 * Return: Return value to pointer
 */

char *_strcpy(char *dest, char *src)
{
	int b = 0;

	while (src[b])
	{
		dest[b] = src[b];
		b++;
	}
	return (dest);
}
