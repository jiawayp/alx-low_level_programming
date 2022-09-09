#include<stdio.h>
/**
 * main-entry for running the program
 *
 * Description: ouput Hexadecimal numbers
 *
 * Return: return 0 (sucess)
 */
int main(void)
{
	int x = 0;

	while (x <= 47)
	{
		if (x < 10)
		{
			putchar(x + '0');
		}
		else if (x > 41)
		{
			putchar(x - 10 + 'A');
		}
		x++;
	}
	putchar(10);

	return (0);
}
