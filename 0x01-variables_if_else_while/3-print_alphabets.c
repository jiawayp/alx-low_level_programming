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

	while (x < 123 && y <91)
	{
		putchar(x);
		putchar(y);
		x++;
		y++;
	}
	putchar(10);
	
	return (0);
}
