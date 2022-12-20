#include "main.h"

/**
 * print_rev - print string in rev
 * @s: string to print in rev
 */
void print_rev(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	while (x >= 0)
	{
		_putchar(*s);
		s--;
		x--;
	}
	_putchar('\n');
}
