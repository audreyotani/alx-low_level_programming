#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int counter, flow;
	unsigned long int1 = 1;
	unsigned long int2 = 1;
	unsigned long sum = 0;
	long int1_head, int1_tail, int2_head, int2_tail, sum_head, sum_tail;

	printf("1");

	for (counter = 2; counter <= 93; counter++)
	{
		sum = int1 + int2;
		int1 = int2;
		int2 = sum;
		printf(", %lu", sum);
	}

	int1_head = int1 / 1000000000;
	int1_tail = int1 % 1000000000;
	int2_head = int2 / 1000000000;
	int2_tail = int2 % 1000000000;

	for (; counter < 99; counter++)
	{
		flow = (int1_tail + int2_tail) / 1000000000;
		sum_tail = (int1_tail + int2_tail) - (1000000000 * flow);
		sum_head = (int1_head + int2_head) + flow;

		printf(", %lu%lu", sum_head, sum_tail);

		int1_head = int2_head;
		int1_tail = int2_tail;
		int2_head = sum_head;
		int2_tail = sum_tail;
	}


	printf("\n");

	return (0);
}
