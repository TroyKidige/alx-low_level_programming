#include "main.h"
/**
 * flip_bits - a function that returns number of bits
 * @n: parameter for input
 * @m: parameter for input
 * Return: 0 (success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int united;

	for (united = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			united++;
	}
	return (united);
}
