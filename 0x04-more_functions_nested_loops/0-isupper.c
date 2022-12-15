#include "main.h"
/**
 * _isupper - check if char provided is uppercase
 * @c: char to be checked
 * Return: 1 if @c is uppercase, 0 if not uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
