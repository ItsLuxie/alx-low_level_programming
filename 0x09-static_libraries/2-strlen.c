#include "main.h"
/**
 * _strlen - calculate the strimg length
 * @s: character of arrays being calc
 * Description: i is the string length
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	return (i);
}
