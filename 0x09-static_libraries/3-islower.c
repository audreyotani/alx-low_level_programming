#include "main.h"

/**
 * _islower - entry point
 * Description: 'checking for lowercase'
 * @c: character
 * Return: Always (1) Success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
