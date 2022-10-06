#include "main.h"
#include <stdlib.h>

/**
 * array_range - prototype to create an array
 * @min: lowest value
 * @max: highest value
 * Return: pointer
 */

int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}

	int *ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	int i = 0;

	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
