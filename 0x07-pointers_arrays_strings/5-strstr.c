#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: one string
 * @needle: another string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *result;

	result = strstr(haystack, needle);
	return (result);
}
