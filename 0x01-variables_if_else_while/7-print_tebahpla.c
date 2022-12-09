#include <stdio.h>
/**
 * main - entry point to program
 *
 * Return: always 0(success)
 */
int main(void)
{
	char alphabet = 122;

	while (alphabet > 96)
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');

	return (0);
}
