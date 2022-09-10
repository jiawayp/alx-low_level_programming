#include<stdio.h>
/**
 * main-entry: entry point that run every program
 *
 * Description: output number separated by commas.
 *
 * Return: return 0 (sucess)
 */
int main(void)
{
	int x = 47;

	while (x <= 57)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(44);
			putchar(32);
		}
		x++;
	}
	putchar(10);

	return (0);
}
