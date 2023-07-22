#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds teo numbers
 * @a: first no
 * @b: second number
 * Return: 0 success
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - entry poiny
 * @a: first number
 * @b: second number
 * Return: 0 success
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mulriplies numbers
 * @a: first no
 * @b: second number
 * Return: 0 success
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - checks division of number
 * @a: first number
 * @b: second number
 * Return: 0 suceess
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - checks the modulus
 * @a: first number
 * @b: sevond number
 * Return: 0 success
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
