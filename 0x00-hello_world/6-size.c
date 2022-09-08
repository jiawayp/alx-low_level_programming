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
	char;
	int;
	long int;
	long long;
	float;
	printf("Size of char: %d-byte(s)\n", sizeof(char));
	printf("Size of an int: %d-byte(s)\n", sizeof(int));
	printf("Size of a long int: %d-byte(s)\n", sizeof(long int));
	printf("Size of a long long: %d-byte(s)\n", sizeof(long long));
	printf("Size of a float: %d-byte(s)\n", sizeof(float));
	return (0);
}
