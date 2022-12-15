#include "main.h"

/**
 * jack_bauer - print from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr <= 23; hr++)
		for (min = 0; min < 60; min++)
		{
			if (hr <= 9)
			{
				_putchar('0');
				_putchar(hr + '0');
			}
			else if (hr > 9)
			{
				_putchar((hr / 10) + '0');
				_putchar((hr % 10) + '0');
			}
			_putchar(':');
			if (min <= 9)
			{
				_putchar('0');
				_putchar(min + '0');
			}
			else if (min > 9)
			{
				_putchar((min / 10) + '0');
				_putchar((min % 10) + '0');
			}
			_putchar('\n');
		}
}
