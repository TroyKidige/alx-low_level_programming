#include "main.h"
/**
 * _whatsmyname - a program that prints its name, followed by a new line.
 * @argc: parameter that counts
 * @argv: parameter that points to the string
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
