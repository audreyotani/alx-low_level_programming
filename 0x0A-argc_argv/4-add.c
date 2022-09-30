#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counts arguments
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0, j = 0;
	
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			if (argv[i][0] >= '0' && argv[i][0] <= '9')
			{
				j += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", j);
	}
	return (0);
}
