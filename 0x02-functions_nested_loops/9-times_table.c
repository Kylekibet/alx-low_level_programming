#include "main.h"

/**
 * times_table - output times table to standard out
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		_putchar('0');
		_putchar(',');
		for (y = 1; y < 10; y++)
		{
			_putchar(' ');
			if (y * x < 10)
			{
				_putchar(' ');
				_putchar((y * x) + '0');
			}
			else
			{
				_putchar(((y * x) / 10) + '0');
				_putchar(((y * x) % 10) + '0');
			}
			if (y != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
