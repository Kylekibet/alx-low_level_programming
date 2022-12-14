#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @x: number to compute
 * Return: return number computed
 */
int _abs(int x)
{
	if (x < 0)
		return (x * -1);
	return (x);
}
