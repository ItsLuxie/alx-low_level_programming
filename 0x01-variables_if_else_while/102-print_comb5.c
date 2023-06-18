#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar((x / 10) + '0');
			putchar((y % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i < 98 || j < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
