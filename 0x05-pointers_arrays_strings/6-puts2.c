#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * @str: parameter
 * Return: 0 (success)
 */

void puts2(char *str)
{
	int troy = 0;

	int t = 0;

	char *y = str;

	int o;

	while (*y != '\0')
	{
		y++;
		troy++;
	}
	t = troy - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
		{	_putchar(str[o]);
		}
	}
	_putchar('\n');
}
