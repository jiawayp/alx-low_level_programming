#include "main.h"

/**
 * jack_bauer - function prototype
 *
 * Description: print every minute of the day
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int hours_max, hours_tenth, hours_ones, minutes_tenth, minutes_ones;

	hours_max = 58;
	hours_tenth = '0';

	for (hours_tenth = '0'; hours_tenth < 3; hours_tenth++)
	{
		if (hours_tenth == '2')
		{
			hours_max = '4';
		}
		hours_ones = '0';
		while (hours_ones < hours_max)
		{
			minutes_tenth = '0';
			while (minutes_tenth < '6')
			{
				minutes_ones = '0';
				while (minutes_ones < 58)
				{
					_putchar(hours_tenth);
					_putchar(hours_ones);
					_putchar(':');
					_putchar(minutes_tenth);
					_putchar(minutes_ones);
					_putchar('\n');
					minutes_ones++;
				}
				minutes_ones = '0';
				minutes_tenth++;
			}
			minutes_tenth = '0';
			hours_ones++;
		}
		hours_ones = '0';
	}
}

