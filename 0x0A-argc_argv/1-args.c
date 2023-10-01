#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: parameter that counts
 * @argv: parameter that points to the string
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
