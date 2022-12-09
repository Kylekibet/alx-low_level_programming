#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - entry point to program
 *
 * Return: always 1(standard error)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	write(1, "\n", 1);
	return (1);
}
