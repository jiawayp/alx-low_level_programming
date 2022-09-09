#include<stdio.h>
/**
 * main-entry: main entry for the program
 *
 * Description:output all lower case expect q and e
 *
 * Return: return 0 (sucess)
 */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x != 101 && x != 113)
		{
			putchar(x);
			x++;
		}
	}
	putchar(10);

	return (0);
}
