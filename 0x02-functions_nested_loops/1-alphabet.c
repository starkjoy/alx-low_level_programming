#include "main.h"
#include <stdio.h>

/**
 * main - main prints a list of alphabets
 *
 * Return: returns 0
 *
 * print_alphabet - generates a list of lowercase letters
 *
 * Return: returns 0 
 *
 */

void print_alphabet(void)
{
	int a;
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		if (a == 'z')
		{
			putchar('\n');
		}
	}

	return;
}

int main(void)
{
	void print_alphabet();
	return (0);
}
