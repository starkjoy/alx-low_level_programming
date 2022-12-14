#include <stdio.h>

/**
 * print_alphabet_x10 - generates a 10x lowercase letters
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
}
