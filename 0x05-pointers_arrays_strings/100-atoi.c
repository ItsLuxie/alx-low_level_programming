#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _atoi - converts a sring to an integer
 * @s: source string
 * Return: 0
 */
int _atoi(char *s)
{
	int num = 0;

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		num = num * 10 + (s[i] - 48);
		printf("%d\n", num);
	}
	return (0);
}
