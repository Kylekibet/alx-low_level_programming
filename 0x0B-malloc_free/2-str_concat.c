#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - combines two strings to one string.
 * @s1: first string to concatinate
 * @s2: second string to concatinate
 * Return: new array or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int lenS1, lenS2, increment;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL)
		lenS1 = strlen(s1);
	else
		lenS1 = 0;
	if (s2 != NULL)
		lenS2 = strlen(s2);
	else
		lenS2 = 0;

	newStr = malloc(sizeof(char) * (lenS1 + lenS2) + 1);
	for (increment = 0; increment < lenS1; increment++)
		newStr[increment] = s1[increment];
	for (increment = 0; increment < lenS2; increment++)
		newStr[increment + lenS1] = s2[increment];
	newStr[lenS2 + lenS1] = '\0';
	return (newStr);
}
