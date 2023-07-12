#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point with arguments
 * @argc: argumemt count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mult;
	int j, k;

	if (argc == 3)
	{
		j = atoi(argv[1]);
		k = atoi(argv[2]);

		mult = j * k;

		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
