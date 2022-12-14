#include "main.h"
#include <stdio.h>

/**
 * main - main prints a list of alphabets
 *
 * Return: returns 0
 *
 * print_alphabet_x10 - generates a 10x lowercase letters
 *
 * Return: returns 0 
 *
 */

void print_alphabet_x10(void)
{
	int a;
	int b = 0;

	while (b < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
			if (a == 'z')
			{
				putchar('\n');
			}
		}

		b++;
	}

	return;
}

int main(void)
{

	return (0);
}
