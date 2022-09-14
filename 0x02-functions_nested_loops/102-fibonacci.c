#include <stdio.h>

/**
 * main -entry point
 * Return: 0
 */

int main(void)
{
	int count;
	int countto = 50;
	long int1 = 1;
	long int2 = 2;

	for (count = 1; count <= (countto / 2); count++)
	{
		printf("%li %li ", int1, int2);
		int1 += int2;
		int1 += int2;
	}
	if (countto % 2 == 1)
	{
		printf("%li", int1);
	}
	printf("\n");

	return (0);
}
