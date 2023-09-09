#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that prints last digits
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d and is greater than %d\n", n, n);
	if (n == 0)
		printf("Last digit of %d and is %d\n", n, n);
	if (n < 6 && (n % 10) != 0)
		printf("Last digit of %d and is less than %d  and not %d\n", n, n, n % 10 );
	return (0);
}
