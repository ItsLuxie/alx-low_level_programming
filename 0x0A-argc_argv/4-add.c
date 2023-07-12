#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry point wuth args
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j, k;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		j = atoi(argv[1]);
		k = atoi(argv[2]);

		if (!(isdigit(j) || isdigit(k)))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			i = j + k;

			printf("%d\n", i);
			return (0);
		}
	}
}
