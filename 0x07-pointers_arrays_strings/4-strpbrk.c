#include "main.h"
/**
 * *_strpbrk - a function that searches a string for any of a set of bytes.
 * @s: a parameter for the input
 * @accept: a parameter for the input
 * Return: 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
				return (s);
		}
		s++;
	}
	return ('\0');
}
