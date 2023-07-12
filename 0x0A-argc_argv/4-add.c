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
		for (j = 1; j < argc; j++)
		{
			for (k = 0; argv[j][k] != '\0'; k++)
			{
				if (!isdigit(argv[j][k]))
				{
					printf("Error\n");
					return (1);
				}
			}
			i += atoi(argv[j]);
		}
			printf("%d\n", i);
	}
			return (0);
}
