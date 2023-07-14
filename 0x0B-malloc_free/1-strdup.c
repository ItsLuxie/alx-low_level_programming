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

	while (str[i] != 0)
	{
		str++;
	}
	char *s = malloc(sizeof(char) * x) + 1;

	if (s == NULL)
	{
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
