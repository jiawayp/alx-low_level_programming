#include <stdio.h>

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 sucess
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (argv - 1);
}
