#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - gets last digit of a number
 * @x: number to get last digit
 * Return: the last digit of @x
 */
int print_last_digit(int x)
{
	int last = abs(x) % 10;
	_putchar(last + '0');

	return (last);
}
