#include "main.h"

/**
 * print_line - a program that draws a line
 * @n: a parameter that checks number
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar ('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

	_putchar('\n');
	}
}
