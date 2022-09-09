#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Alphabets'
 * Return: Always (0) Success
 */

int main(void)
{
	char ch = 'a';
		while (ch <= 'z')
		{
			putchar("%c\n", ch);
			ch++;
		}

		return (0);
}
