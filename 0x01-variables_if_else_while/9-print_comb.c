#include <stdio.h>

/**
 * main - main prints possible combinations of single-digits
 *
 * Return: return 0
 */

int main(void)
{
	int base;

	for (base = '0';  base <= '9'; base++)
	{
		putchar(base);
		if (base == '9')
		{
			putchar('\n');
		}
		else
		{
			printf( "%c, ", base);
		}
	}

	return (0);
}
