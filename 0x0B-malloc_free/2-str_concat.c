#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - conconcatenates string
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0;
	char *str = malloc(sizeof(*str));
	char *st = malloc(sizeof(*st));

	s1 = str;
	s2 = st;

	if (str == NULL || st == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		++s1;
		i++;
	}
	while (st[j] != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
		j++;
	}
	free(str);
	free(st);
	return (str);
}
