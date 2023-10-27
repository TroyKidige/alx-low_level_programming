#include "main.h"
/**
 * set_bit - a function that sets the value of a bit
 * @n: parameter for unsigned long int
 * @index: parameter for index
 * Return: 0 (success)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;

	if (index > 63)
		return (-1);
	s = 1 << index;
	*n = (*n | s);
	return (1);
}
