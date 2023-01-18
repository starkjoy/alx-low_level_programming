#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns sum
 * @a: first integer
 * @b: second integer
 * Return: integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns substration
 * @a: first integer
 * @b: second integer
 * Return: integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns multiplication
 * @a: first integer
 * @b: second integer
 * Return: integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division
 * @a: first integer
 * @b: second integer
 * Return: integer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns modulos
 * @a: first integer
 * @b: second integer
 * Return: integer
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
