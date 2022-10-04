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
	int i = 1, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	ptr = malloc((i * sizeof(char)) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
