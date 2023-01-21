#include "main.h"

/**
 * main - adds numbers passed to argv
 * @argc: number of args provided
 * @argv: arguments passed to program
 * Return: 0 when successfull and  1 when a error has occured
 */
int main(int argc, char **argv)
{
	int x, sum = 0;

	for (x = 1; x < argc; x++)
	{
		if (!isdigit(*argv[x]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);

	return (0);
}
