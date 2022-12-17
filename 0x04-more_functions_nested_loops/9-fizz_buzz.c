#include <stdio.h>
/**
 * main - print fizz if multiples of 3 buzz if multiples
 * 5 and fizzbuzz if multiples of both 3 and 5
 * Return: always 0(success)
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz");
		else if ( x % 3 == 0)
			printf("Fizz");
		else if ( x % 5 == 0)
			printf("Buzz");
		else
			printf("%d", x);
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
