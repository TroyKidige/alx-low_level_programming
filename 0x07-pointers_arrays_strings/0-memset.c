#include"main.h"
/**
 * *_memset - a function that fills memory with a constant byte
 * @s: a parameter that points to address
 * @b: adress
 * @n: bytes location
 * Return: 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
