#include "main.h"

/**
 * print_line - print line
 * @n: length of line to print
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
