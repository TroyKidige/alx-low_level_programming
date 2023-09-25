#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: a parameter for array
 * Return: 0 (suceess)
 */

void print_chessboard(char (*a)[8])
{
	int b;

	int s;

	for (b = 0; b < 8; b++)
	{
		for (s = 0; s < 8; s++)
			_putchar(a[b][s]);
		_putchar('\n');
	}
}
