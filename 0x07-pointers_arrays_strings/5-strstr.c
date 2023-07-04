#include "main.h"
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
		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			char *h = haystack;
			char *n = needle;

			h++;
			n++;
		}
		while (needle[j] == '\0')
			return(haystack);
	}
	return (NULL);
}
