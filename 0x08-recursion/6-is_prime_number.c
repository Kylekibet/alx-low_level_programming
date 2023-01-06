#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check if prime number
 * Return: 1 if prime number 0 if not prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
 * prime_number - checks for prime
 * @n: number to check
 * @s: stating point
 * Return: 1 if prime 0 if not prime
 */

int prime_number(int n, int s)
{
	if (s == 1)
		return (1);
	if (n % s == 0 && s > 0)
		return (0);
	return (prime_number(n, s - 1));
}
