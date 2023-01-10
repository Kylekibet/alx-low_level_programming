#include "main.h"

/**
 * main - prints name of program
 * @argc: number of arguments provided
 * @argv: arguments provided
 * Return: always zero
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
