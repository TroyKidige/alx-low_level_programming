# include <stdio.h>
/**
 * main- a script using size
 * Retun: 0 for success
 */
int main(void)
{
	printf("size of a char: %d  byte(s)", sizeof(char));
	printf("size of an int:%d  byte(s)",sizeof(int));
	printf(" Size of a long int: %d byte(s)",sizeof(long int));
	printf("Size of a long long int: %d byte(s)",sizeof(long long int));
	printf("Size of a float: %d byte(s)",sizeof(float));
	return (0);
}
