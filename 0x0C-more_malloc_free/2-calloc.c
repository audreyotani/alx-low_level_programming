#include "main.h"
#include <stdlib.h>

/**
 * _calloc - prototype to allocate memory
 * @nmemb: integer
 * @size: size integer
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)p + i) = 0;
	}
	return (p);
}
