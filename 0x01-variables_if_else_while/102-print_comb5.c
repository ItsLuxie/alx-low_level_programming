#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;
/*
*x and y are the two digits forming the combo
*/
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			
			if((x < 9) && (y < 9))
					{
					putchar(',');
					putchar(' ');
					}
		}
	}
	putchar('\n');
	return (0);
}
