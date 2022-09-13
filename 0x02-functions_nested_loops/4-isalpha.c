#include "main.h"

/**
 * _isalpha - entry point
 * @c: character to be printed
 * Description: 'checking for alphabet'
 * Return: Always (1) success
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
