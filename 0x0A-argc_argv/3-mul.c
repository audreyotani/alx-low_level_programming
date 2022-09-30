#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0, j = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
