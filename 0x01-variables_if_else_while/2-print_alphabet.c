#include <stdio.h>
/**
 * main - entry point to program
 *
 * Return: always 0(success)
 */
int main(void)
{
	char alphabet = 97;

	while (alphabet < 122)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
}
