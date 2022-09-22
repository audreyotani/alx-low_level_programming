#include "main.h"
#include <string.h>

/**
  * _strcat - concatenates two strings
  *
  * @dest: The destination file
  *
  * @src: The source file
  *
  * Return: dest
  *
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
