#include <stdio.h>
#include <unistd.h>
/**
 * main- A program not using printf or puts
 * Return: 1 (success)
 */
int main(void){
char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
		write(2, quote, 59);
	return (1);
}
