#include "main.h"
/**
 * palindrome - check if char provided is palindrome
 * @s: char to check
 * @x: counter
 * Return: 1 if palindrome otherwise -1
 */
int palindrome(char *s, int x)
{
	if (s[x] == '\0')
		return (1);
	if (s[x] != s[(strlen(s) - 1) - x])
		return (0);
	x++;
	return (palindrome(s, x));
}


/**
 * is_palindrome - check if string provided is a palindrome
 * @s: string to check
 *
 * Return: 1 if @s if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	return (palindrome(s, 0));
}
