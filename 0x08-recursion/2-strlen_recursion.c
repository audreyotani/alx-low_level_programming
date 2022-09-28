#include "main.h"

/**
 * _strlen_recursion - prototype to return string length
 * @s: string
 * Return: 0 success
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		_strlen_recursion(s + 1);
	}
	return (0);
}
