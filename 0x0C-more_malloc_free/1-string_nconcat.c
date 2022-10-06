#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - prototype to concantenate two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	if (n >= j)
		n = j;
	concat = malloc(sizeof(char) * (i + n + 1));

	if (concat == NULL)
		return (NULL);
	for (k = 0; s1[k]; k++)
		concat[k] = s1[k];
	for (l = 0; l < n; l++)
		concat[k + 1] = s2[l];
	concat[k + l] = '\0';

	return (concat);
}
