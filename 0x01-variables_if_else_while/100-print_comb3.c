#include <stdio.h>

/**
 *  * main - Entry point
 *  *program printing two digit combo
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2;
/*n1 is the first digit, n2 os tgw second one*/
	for (n1 = 0; n1 < 9; n1++)
	{
		for (n2 = 1; n2 < 10; n2++)
		{
			if (n1 != n2)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');
			}
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
