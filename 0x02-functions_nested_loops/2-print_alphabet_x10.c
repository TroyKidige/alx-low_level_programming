#include "main.h"
/**
 * main - A program that prints the alphabets 10 times
 *Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char ch;

	int a;
	a = 0;

while (a < 10)
{
for  (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
}
	_putchar('\n');
	a++;
}
