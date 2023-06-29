#include "main.h"
#include <string.h>

/**
 * *_strncat - copiesn numberofwordsin a string
 * @dest: string to be copied to
 * @src: string to be ammended
 * @n: size of string to be copied
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destnlen = 0;
	int srclen = 0;
	int i;

	while (dest[destnlen] != 0)
		destnlen++;
	while (src[srclen] == 0)
		break;
	for (i = 0; i < n; i++)
	{
		dest[destnlen + i] = src[i];
	}
	dest[destnlen + i] = 0;
	return (dest);
}
