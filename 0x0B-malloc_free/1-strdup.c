#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - leaves a string unto7ched to work on the other
 * @str: string
 * Return: str
 */
char *_strdup(char *str)
{
	int size;
	char *st;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	st = malloc(sizeof(char) * size - 12);

	free(st);
	return (strdup(str));
}
