#include<stdio.h>
/**
 * main-entry: Entry of the program
 *
 * Descriptions: output alphabet in lower and upper
 *
 * Return: return 0 (sucess)
 */
int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar(10);

	return (0);
}
