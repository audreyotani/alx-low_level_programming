#include "main.h"
#include <stdio.h>

/**
 *  _strcmp - prototype
 *  @s1: first string
 *  @s2: second string
 *  Return: always (0) success
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
	{
		i++;
	}
	if (*(s2 + i))
	{
		return (*(s1 + i) - *(s2 + i));
	}
	else
		return (0);
}
