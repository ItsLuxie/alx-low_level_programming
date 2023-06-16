#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char%dbyte(s)\n:", sizeof(char));
	printf("size of int%dbyte(s)\n:", sizeof(int));
	printf("size of long int%dbytes(s)\n:", sizeof(long int));
	printf("size of long long int%dbyte(s)\n:", sizeof(long long int));
	printf("size of float%dbyte(s)\n:", sizeof(float));
	return (0);
}
