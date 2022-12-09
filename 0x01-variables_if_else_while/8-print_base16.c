#include <stdio.h>
/**
 * main - entry point to program
 *
 * Return: always 0(success)
 */
int main(void)
{
	char number = 48;
	char alphabet = 97;

	while (number < 58)
	{
		putchar(number);
		number++;
	}
	while (alphabet < 103)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
