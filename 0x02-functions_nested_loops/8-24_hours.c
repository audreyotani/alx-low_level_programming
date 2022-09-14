#include "main.h"

/**
 * jack_bauer - Prototype
 * Description: 'Print minutes of a day'
 * Return: Return value
 */

void jack_bauer(void)
{
	int hour = 0;
	int min;

	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
