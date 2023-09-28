#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: a parameter for the string
 * Return: 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
