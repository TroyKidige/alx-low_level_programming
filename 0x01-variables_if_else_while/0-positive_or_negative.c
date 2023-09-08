#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0){
		result="is positive";
	}
	else(n ==0){
	result="is zero";
	}
	else if(n < 0);
	result="is negative"
	return (0);
}
