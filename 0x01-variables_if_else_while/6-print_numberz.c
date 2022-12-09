#include <stdio.h>
/**
 * main - entry point to program
 *
 * Return: always 0(success)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');

	return (0);
}
