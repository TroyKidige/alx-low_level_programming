#include <stdio.h>
/**
 * main - work
 * Return: 0 (success)
 */
int main(void)
{
	int sum = 0;

	int i;

	for (i = 1; i <= 10; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
}
