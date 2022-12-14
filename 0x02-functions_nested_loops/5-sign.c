#include "main.h"

/**
 * print_sign - check the sign of a number
 * @c: the number to be checked
 * Return:  1 if number is greater than zero, 0 if number is zero,
 * -1 if number is less than zero
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
