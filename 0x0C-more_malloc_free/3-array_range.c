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
	unsigned int array_size, i;
	int *ptr;
	
	if (min > max)
	{
		return (NULL);
	}
	array_size = max - min;
	ptr = malloc(sizeof(int) * (array_size + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < array_size; i++);
	{
		ptr[i] = i + min;
		ptr[array_size] = max;
	}
	return (ptr);
}
