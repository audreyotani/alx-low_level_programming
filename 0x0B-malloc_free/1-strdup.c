#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - prototype
 * @str: pointer
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr = malloc(i * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < i; j++)
		{
			ptr[j] = str[j];
		}
	}
	return (ptr);
}
