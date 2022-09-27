#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - prototype to print sums of diagonals
 * @a: integer
 * @size: integer
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *(a + i * size + j);
			}
			if (i + j == size - 1)
			{
				sum2 += *(a + 1 * size + j);
			}
			if (*(a + i * size + j) == -1)
			{
				printf("Invalid input\n");
				exit(98);
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
