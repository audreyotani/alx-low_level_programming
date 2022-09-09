#include <stdio.h>

/**
 * main - Entry point
 * Description: 'hexadecimal numbers'
 * Return: always (0) Success
 */

int main(void)
{
	int num = 0;
	char letter = 'a';

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);

}
