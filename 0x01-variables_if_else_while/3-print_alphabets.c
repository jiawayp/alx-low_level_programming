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
	int x = 97;
	int y = 65;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	while (y <= 90)
	{
		putchar(y);
		y++;
	}
	putchar(10);
	
	return (0);
}
