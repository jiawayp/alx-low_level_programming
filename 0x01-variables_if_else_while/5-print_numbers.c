#include<stdio.h>
/**
 * main-entry: Entry for running the program
 *
 * Description: output number 0-9
 *
 * Return: return 0 (sucess)
 */
int main(void)
{
	int x = 48;

	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	putchar(10);
	
	return (0);
}
