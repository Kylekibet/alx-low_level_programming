#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments passed
 * @argv: arrary of arguments passed
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}
