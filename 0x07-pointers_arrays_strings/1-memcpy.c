#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: parameter for where the memory is stored
 * @src: parameter where memory is copied
 * @n: bytes of address
 *Return: 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;

	int i;

	r = 0;

	i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
