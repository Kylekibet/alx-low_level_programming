#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_last_digit - gets last digit of a number
 * @x: number to get last digit
 * Return: the last digit of @x
 */
int print_last_digit(int x)
{
	x = abs(x);

	_putchar(abs((x % 10)) + '0');

	return (abs(x % 10));
}
