#include<stdio.h>
/**
 * main-Entry: Entry point for all programs
 *
 * Description: Print the size of data types
 *
 * Return: Always return 0 (sucess)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long: %d byte(s)\n", (int) sizeof(long long));
	printf("Size of a float %d byte(s)\n", (int) sizeof(float));

	return (0);
}
