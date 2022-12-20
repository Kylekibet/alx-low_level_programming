#include "main.h"

/**
 * _puts - prints char array to stdout
 * @str: address of char
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
