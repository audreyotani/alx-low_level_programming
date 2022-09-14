#include "main.h"

/**
 * times_table - prototype
 * Description: 'Prints multiplication table'
 */

void times_table(void)
{
	int n;
	int i;
	int p;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			p = (n * i);

			if (i == 0)
			{
			_putchar(p + '0');
			}
			else if (p <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else if (p > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
	}
}
