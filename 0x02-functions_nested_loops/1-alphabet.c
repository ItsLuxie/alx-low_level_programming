#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int ch;

	ch = 97;

	if (ch >= 97 && ch <= 122)
		printf ("%c", ch);
}
