#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 sucess
 */

int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc < 2)
	{
		printf("\n");
		return (0);
	}
	for (a = 0; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
