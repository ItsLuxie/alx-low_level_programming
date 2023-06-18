#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	
	for (letter = 'z'; letter <= 'z'; letter--)
	{
		putchar(letter);
		if (letter == 'a')
		{
			break;
		}
	}
	putchar('\n');

	return (0);
}
