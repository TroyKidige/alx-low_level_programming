#include <stdio.h>

/**
 * main - a program that prints 1 to 10
 * fizz is printed for multiple of 3s
 * buzz is printed for multiple of 5s
 *Return: 0 (success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("fizzBuzz");
		else if ((num % 3) == 0)
			printf("fizz");
		else if ((num & 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
