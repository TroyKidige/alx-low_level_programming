#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: parameter that counts
 * @argv: parameter for the arguement
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int o = 0;

	int a = 0;

	if (argc == 3)
	{
		o = atoi(argv[1]);
		a = atoi(argv[2]);
		printf("%d\n", o * a);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
