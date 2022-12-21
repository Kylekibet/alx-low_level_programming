#include "main.h"

/**
 * print_rev - prints string in rev order
 * @s: string to reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int sl = strlen(s) - 1;
	int x;

	for (x = sl; x > -1; x--)
		_putchar(s[x]);
	_putchar('\n');
}
