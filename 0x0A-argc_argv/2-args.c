#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: parameter thatet number
 * @argv: parameter that points to the string
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);

}
