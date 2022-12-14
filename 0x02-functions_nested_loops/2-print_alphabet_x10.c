#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x < 11; x++)
	{
		for (y = 97; y < 123; y++)
			_putchar(y);
		_putchar('\n');
	}
}
