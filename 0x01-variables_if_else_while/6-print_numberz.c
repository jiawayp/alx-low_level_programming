#include<stdio.h>
/**
 * main-entry of the program
 *
 * Description: output digit from 0-9
 *
 * Return: return 0 (sucess)
 */
int main(void)
{
	int digits = 48;

	while (digits <= 57)
	{
		putchar(digits);
		digits++;
	}
	putchar(10);

	return (0);
}
