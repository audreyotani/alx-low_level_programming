#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Numbers using putchar'
 * Return: Always (0) Success
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}