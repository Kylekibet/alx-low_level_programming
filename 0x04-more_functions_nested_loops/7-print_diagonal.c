#include "main.h"
/**
 * print_diagonal - print half pyramid
 * @n: size of pyramid
 */
void print_diagonal(int n)
{
	int x,y;

	for (x = 0; x < n; x++)
	{
		y = 0;
		while (y < x)
		{
			_putchar(' ');
			y++;
		}
		_putchar('\\');
		if ( x != (n -1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
