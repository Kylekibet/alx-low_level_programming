#include <stdio.h>
/**
 * main - entry point to program
 *
 * Return: always 0(success)
 */
int main(void)
{
	char x = 48;

	while (x < 58)
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
