#include <stdio.h>

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	int a;

	for (a = 0, a < argc; a++)
	{
		printf("argv[%d] = %s\n", a, argv[a]);
	}
	return (0);
}
