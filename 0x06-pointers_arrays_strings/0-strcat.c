#include "main.h"
#include <string.h>

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int a, b, j;

	a = strlen(dest);
	b = strlen(src);

	for (j = 0; j <= b; j++)
	{
		dest[a + j] = src[j];
	}

	return (dest);
}
