#include "main.h"

/**
 * _strlen - PROTOTYPE
 * @s: character
 * Return: 0
 */

int _strlen(char *s)
{
	int x = 0;

	for (; *s != '\0'; s++)
	{
		x++;
	}

	return (x);
}
