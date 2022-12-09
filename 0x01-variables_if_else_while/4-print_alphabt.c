#include <stdio.h>
/**
 * main - entry point to program
 *
 * Return: always 0(success)
 */
int main(void)
{
	char alphabet = 97;

	while (alphabet < 123)
	{
		if (alphabet != 113 && alphabet != 101)
			putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
