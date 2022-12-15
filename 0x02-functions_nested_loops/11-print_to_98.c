#include "main.h"

/**
 * print_to_98 - print from number given to 38
 * @n: start number
 */
void print_to_98(int n)
{

	int x;

	if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
		        if (x >= 0 && x <= 9)
			{
				_putchar(x + '0');
			}
			else if (x > 9)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			else if (x < 0)
			{
				_putchar('-');
				if (x <= -10 && x > -100)
				{
					_putchar((abs(x) / 10) + '0');
					_putchar((abs(x) % 10) + '0');
				}
				else if (x < 0 && x > -10)
				{
					_putchar(abs(x) + '0');
				}
				else if (x <= -100 && x > -1000)
				{
					_putchar((abs(x) / 100) + '0');
					_putchar(((abs(x) % 100) / 10) + '0');
					_putchar((abs(x) % 10) + '0');
				}
			}
			if (x != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
