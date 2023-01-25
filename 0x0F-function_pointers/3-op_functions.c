#include "3-calc.h"

/**
 * op_add - add's two integers
 * @a: first integer to add
 * @b: second integer to add
 * Return: sum of two integers;
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: result of first integer minus second integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: result of multiplication between @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers together
 * @a: first integer
 * @b: second interger
 * Return: result of the division of first @a divided by @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - reminder of modulus
 * @a: first integer
 * @b: second integer
 * Return: results of @a modulus @b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
