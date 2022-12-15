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
			if (x > 9)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}
	}
	_putchar('\n');
}
