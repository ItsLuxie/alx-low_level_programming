#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creation of array
 * @size: size of array
 * @c: array
 * Return: 0 or 1
 */
char *create_array(unsigned int size, char c)
{
	char *charArr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		charArr = (char *)malloc(size * sizeof(char));

		if (charArr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i  = 0; i < size; i++)
			{
				charArr[i] = c;
			}
			charArr[size] = '\0';
		}
		return (charArr);
	}
}
