#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - entry point to program
 *
 * Return: always  0(sucess)
 */

int main(void)
{
	char *s = "_putchar";

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');

	return (0);
}
