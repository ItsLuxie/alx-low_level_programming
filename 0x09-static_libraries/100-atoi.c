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
	unsigned int j = 0;
	int i = 0;
	int n = 1;

	while (s[i] != '\n')
	{
		if (s[i] == '-')
		{
			n *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			j = j * 10 + (s[i] - 48);
		}

		if (j > 0 && !(s[i] >= '0' && s[i] <= '9'))
			break;
		i++;
	}

	return (j * n);
}
