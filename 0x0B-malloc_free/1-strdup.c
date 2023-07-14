#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to new string
 * @str: our string pointer
 * Return: pointer to dulicate strigon success
 */
char *_strdup(char *str)
{
	int i = 0;
	int x;
	char *s;

	while (str[i] != 0)
	{
		i++;
	}
	s = malloc((i * sizeof(char)) + 1);

	if (str == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	for (x = 0; str[x] != 0; x++)
	{
		s[x] = str[x];
	}
	s[x] = 0;

	return (s);

	return (0);
}
