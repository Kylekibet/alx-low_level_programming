#include "main.h"

/**
 * _isalpha - checks if character provided is alpha
 * @c: number to be checked
 * Return: output 1 if @c is lowercase or uppercase otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
