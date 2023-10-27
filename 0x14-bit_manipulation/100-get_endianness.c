#include "main.h"
/**
 * get_endianness - function that checks for endianness
 * Return: 0 (success)
 */
int get_endianness(void)
{
	unsigned int y;
	char *c;

	y = 1;
	c = (char *) &y;

	return ((int)*c);
}
