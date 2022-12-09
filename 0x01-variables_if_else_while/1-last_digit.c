#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point to program
 *
 * Return: always return 0(succes)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n == 0)
		printf("Last digit of %d is 0 and is %d\n", n, n % 10);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
