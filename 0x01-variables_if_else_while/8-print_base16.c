#include <stdio.h>

/**
 * main - main prints in base 16
 *
 * Return: return 0
 */

int main(void)
{
	int base;

	for (base = '0';  base <= 'f'; base++)
	{
		putchar(base);
		if (base == 'f')
		{
			putchar('\n');
		}
	}

	return (0);
}
