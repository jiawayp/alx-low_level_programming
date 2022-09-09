#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main-entry: Main program entry
 *
 * Description: Print the last digit to the console screen.
 *
 * Return: return 0 (sucess)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("The Last digit of %d is %d and it is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("The Last digit of %d is %d and 0\n", n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("The Last digit of %d is %d and it is less than and is not 0\n", n, last_digit);
	}
	return (0);
}


