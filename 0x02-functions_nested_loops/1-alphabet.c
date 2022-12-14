#include <stdio.h>

/**
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
