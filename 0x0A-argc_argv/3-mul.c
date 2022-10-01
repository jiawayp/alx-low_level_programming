#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: error if arg != 2 two
 * return 0 if = 2 arg
 */

int main(int argc, char *argv[])
{
	int i;
	int prod = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		prod = prod * atoi(argv[i]);
	}
	printf("%d\n", prod);
	return (0);
}
