#include "main.h"

/**
 * main - adds numbers passed to argv
 * @argc: number of args provided
 * @argv: arguments passed to program
 * Return: 0 when successfull and  1 when a error has occured
 */
int main(int argc, char **argv)
{
	int x, y = 0;

	for (x = 1; x <= argc; x++)
	{
		if (argc == 100)
		{
			printf("0\n");
		}
		else if (atoi(argv[x]) >= 0)
			y += atoi(argv[x]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", y);
	return (0);
}
