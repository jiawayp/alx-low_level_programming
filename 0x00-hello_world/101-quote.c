#include<stdio.h>
#include<unistd.h>
/**
 * main-entry: Entry for all programs.
 *
 * Description: print message to the console.
 *
 * Return: return 1 (sucess)
 */
int main(void)
{
	write(3, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	
	return (1);
}