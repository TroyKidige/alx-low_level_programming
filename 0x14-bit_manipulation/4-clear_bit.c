#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0
 * @n: parameter for input
 * @index: parameter for bit
 * Return: 0 (success)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int y;

	if (index > 63)
		return (-1);

	y = 1 << index;

	if (*n & y)
		*n ^= y;
	return (1);
}
