#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main-entry: Main Entru for runing programs
 *
 * Description: output non-zero, zero, and negative number
 *
 * Return: return 0 (sucess)
 */

int main(void)
{
	int n;

	srand(time(o));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		prinf("%d is negative\n", n);
	}

	return (0);
}
