#include "main.h"

/**
 * puts2 - print even numbers
 * @str: the string to print even numbers
 * Return: nothing.
 */
void puts2(char *str)
{
	int y = strlen(str), x;

	for (x = 0; x < y; x += 2)
		putchar(str[x]);
	putchar('\n');
}
