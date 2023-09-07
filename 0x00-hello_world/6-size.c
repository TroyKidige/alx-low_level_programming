# include <stdio.h>
/**
 * main-a script using size
 * Return: 0 for success
 */
int main(void)
{
	printf("size of a char: %lu  byte(s)\n",(unsigned long) sizeof(a));
	printf("size of an int:%lu  byte(s)\n",(unsigned long) sizeof(b));
	printf(" Size of a long int: %lu  byte(s)\n",(unsigned long) sizeof(c));
	printf("Size of a long long int: %lu  byte(s)\n",(unsigned long) sizeof(d));
	printf("Size of a float: %lu  byte(s)\n",(unsigned long) sizeof(f));
	return (0);
}
