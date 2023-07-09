#include "main.h"
#include <string.h>
/**
 * _strcat - concratess from one string
 * @dest: wher to print
 * @src: where to re,ove it from
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dl = 0;
	int sl = 0;
	int i;

	while (dest[dl] != '\0')
		dl++;
	while (src[sl] != '\0')
		sl++;

	for (i = 0; i < sl; i++)
	{
		dest[dl + i] = src[i];
	}
	return (dest);
}
