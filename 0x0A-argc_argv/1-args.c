#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: size of array argv
 * @argv: array of size argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
