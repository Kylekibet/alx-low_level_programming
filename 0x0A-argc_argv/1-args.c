#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments passed into it
 * @argv: number of strings passed into it.
 * Return: always 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
