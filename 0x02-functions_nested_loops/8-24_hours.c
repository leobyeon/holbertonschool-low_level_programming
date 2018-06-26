#include "holberton.h"

/**
 * jack_bauer - prints every minute
 * Description: ...of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: nothing, it's void
 */
void jack_bauer(void)
{
	int hour, min, hour1, hour2, min1, min2;

	hour = 0;
	while (hour < 24)
	{
		hour1 = hour / 10;
		hour2 = hour % 10;
		min = 0;
		while (min < 60)
		{
			min1 = min / 10;
			min2 = min % 10;
			_putchar(hour1 + '0');
			_putchar(hour2 + '0');
			_putchar(':');
			_putchar(min1 + '0');
			_putchar(min2 + '0');
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
