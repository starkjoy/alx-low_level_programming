#include <stdio.h>
#include "main.h"

/**
 * main - main entry
 * Description: It prints fizz, buzz, fizzbuzz to satisfy conditions
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else
		{
			printf('"%i, i");
			putchar(' ');
		}
	}
	putchar(' ');

	return (0);
}
