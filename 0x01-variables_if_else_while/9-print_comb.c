#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Single digits in asecnding order'
 * Return: Always (0) Success
 */

int main(void)
{
	int single = 0;

	while (single <= 9)
	{
		putchar((single % 10) + '0');
			single++;
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
