#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: parameter
 *Return: 0 (success)
 */

void puts_half(char *str)
{
	int a, n, troy;

	troy = 0;

	for (a = 0; str[a] != '\0'; a++)
		troy++;
	n = (troy / 2);

	if ((troy % 2) == 1)
		n = ((troy + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
