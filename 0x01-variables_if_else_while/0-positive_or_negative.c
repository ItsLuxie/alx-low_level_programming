#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/*
 * more headers goes there
*betty style doc for function main goes there
 * main - Entry point
 *
 * Description: 'the program's description'
 * parameter: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int main(void)
/* creating the random number*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
