#include "3-calc.h"

/**
 * main - calls function to add, subtract, minus, modulus and divid
 * @argc: argument counter
 * @argv: argument vectors
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL)
	{
		exit(99);
		printf("Error\n");
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		exit(100);
		printf("Error\n");
	}
	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
