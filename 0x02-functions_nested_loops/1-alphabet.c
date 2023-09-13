#include "main.h"
/**
 *print_alphabet. - A program that prints lowercase alphabets
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

		for (letter = 'a'; letter  <= 'z'; letter++)
		_putchar(letter);
		_putchar('\n');
}
