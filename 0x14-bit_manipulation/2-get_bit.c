#include "main.h"
/**
 * get_bit - a function that returns value of bit
 * @n:parameter for unsigned long int
 * @index: parameter for bit
 * Return: 0 (success)
i */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int y;

	if (n == 0 && index < 64)
		return (0);
	for (y = 0; y <= 63; n >>= 1, y++)
	{
		if (index == y)
		{
			return (n & 1);
		}
	}
	return (-1);
}
