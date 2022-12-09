#include <stdio.h>

/**
 * main - main prints in base 16
 *
 * Return: return 0
 */

int main(void)
{
	int base;
	int hex;

	for (base = '0';  base <= '9'; base++)
	{
		putchar(base);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
		if (hex == 'f')
		{
			putchar('\n');
		}
	}

	return (0);
}
