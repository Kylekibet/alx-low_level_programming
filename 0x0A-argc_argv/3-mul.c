#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of args provided
 * @argv: provided arguments
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char **argv)
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");

	return (0);
}
