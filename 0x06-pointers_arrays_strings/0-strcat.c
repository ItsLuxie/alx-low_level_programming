#include "main.h"
#include <string.h>
#include  <stdio.h>

/**
 * *_strcat - concatenates strings
 * Description: copies one string to another to complete sentence
 * @dest: resulting string
 * @src: appended string
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int destnlen = 0;
	int srclen = 0;
	int i;

	if (destnlen != 0)
		destnlen++;
	if (srclen != 0)
		srclen++;
	for (i = 0; i < srclen; i++)
		dest[destnlen + i] = src[i];
	return (dest);
}
