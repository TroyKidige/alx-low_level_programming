#include "main.h"
/**
 * *_strchr - a function that locates a character in a string.
 * @s: a parameter for input
 * @c: a parametr for input
 * Return: 0 (success)
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	for (; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
