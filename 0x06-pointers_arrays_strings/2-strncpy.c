#include <string.h>
#include "main.h"
/**
 * *_strncpy - copies content of n in a string
 * @dest: first string
 * @src: string to be copied
 * @n: count
 * Return: pointer to second string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = 0;
		while (src[i] != 0)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
