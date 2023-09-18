#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse, followed by a new line
 * @s: string
 */
void print_rev(char *s)
{
	int troy = 0;

	int y;

	while (*s != '\0')
	{
		troy++;
		s++;
	}
	s --;
	for (y = troy; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
