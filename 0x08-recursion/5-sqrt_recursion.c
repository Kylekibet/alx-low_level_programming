#include "main.h"
/**
 * _sqrt_recursion - takes a number number to find squreroot
 * @n: number to find squre root
 * Return: squareroot of number if not -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt(n, 0));
}

/**
 * real_sqrt - takes two number starting point and a number to find sqaretoot
 * @n: number to find squareroot
 * @s: starting point
 * Return: square of a number
 */
int real_sqrt(int n, int s)
{
	if (s * s > n)
		return (-1);
	else if (s * s == n)
		return (s);
	return (real_sqrt(n, s + 1));
}
