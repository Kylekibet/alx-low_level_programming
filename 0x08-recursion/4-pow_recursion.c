#include "main.h"

/**
 * _pow_recursion - find power of given number
 * @x: number to find the power of
 * @y: number to mulply by
 * Return: power of x if x is less than 0 return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
