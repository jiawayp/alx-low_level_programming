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
	int a, b, sum = 0;

	if (argc < 2)
	{
		printf("\n");
		return (0);
	}
	while (a < argc)
	{
		while (argv[a][b] != '\0')
		{
			if (!isdigit(agrv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
			b++;
		}
		a++;
		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
