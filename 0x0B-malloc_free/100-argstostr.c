#include "main.h"
#include  <stdio.h>
#include <stdlib.h>
/**
 * argstostr - argument to string concatenates
 * @ac: argument count
 * @av: argument vector
 * Return: null if av or ac is 0
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, count;

	for (i = 0, count = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			count++;
		}
	}
	ptr = malloc(count * sizeof(char));
	if (av == NULL)
		printf("Failed\n");
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
	ptr[k] = '\n';
	k++;
	}
	ptr[k] = 0;
	return (ptr);
}
