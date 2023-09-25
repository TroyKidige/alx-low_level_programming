#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: parameter for input
 * @accept: parameter for input
 * Return: 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int t;

	unsigned int n;

	n = 0;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				n++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
