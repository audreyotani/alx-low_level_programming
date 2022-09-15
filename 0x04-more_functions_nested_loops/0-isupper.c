#include "main.h"

/**
 * _isupper - entry point
 * @c: character
 * Return: Return value
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
