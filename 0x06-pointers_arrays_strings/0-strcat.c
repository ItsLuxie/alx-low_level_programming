#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates strings
 * @dest: resulting string
 * @src: appended string
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int destnlen = 0;
	int srclen = 0;
	int i;

	while (dest[destnlen] != 0)
		destnlen++;

	while (src[srclen] != 0)
		srclen++;

	for (i = 0; i < srclen; i++)
	{
		dest[destnlen + i] = src[i];
	}

	return (dest);
}
