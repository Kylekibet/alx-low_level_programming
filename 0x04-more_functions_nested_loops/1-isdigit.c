#include "main.h"

/**
 * _isdigit - check if number provided is a number
 * @c: number to be checked
 * Return: 1 if @c is digit otherwise 0
 */
int _isdigit(int c)
{
	if ( c >= '0' && c <= '9')
		return (1);
	return (0);
}
