#include<stdio.h>
/**
 * main-entry for the program
 *
 * Description: output alphabet in reverse
 *
 * Return: return 0 (sucess)
 */
int main(void)
{
	int r_alph = 122;

	while (r_alph >= 97)
	{
		putchar(r_alph);
		r_alph--;
	}
	putchar(10);

	return (0);
}
