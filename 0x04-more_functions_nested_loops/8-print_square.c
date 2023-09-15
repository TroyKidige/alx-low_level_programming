#include "main.h"

/**
 * print_square - a program that prints squares
 * @size: a parameter for the size of the squares
 */
void print_square(int size)
{
	int x, y;

	if (size < 1)
		_putchar('\n');
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
