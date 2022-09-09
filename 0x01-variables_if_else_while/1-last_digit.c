#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main-entry: Main program entry
 *
 * Description: Output the last digit
 *
 * Return: return 0 (sucess)
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	
	else if (last == 0)
	
		printf("Last digit of %d is %d and 0\n", n, last);
	
	else if (last < 6 && last != 0)
	
		printf("Last digit of %d is %d and is less 6 than and is not 0\n", n, last);
	return (0);
}


