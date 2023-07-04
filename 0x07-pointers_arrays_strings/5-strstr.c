#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: one string
 * @needle: another string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (needle);
			}
		}
	}
	return (NULL);
}
