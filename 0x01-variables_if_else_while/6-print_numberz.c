#include <stdio.h>

/**
 * main - main prints in lower and upper case
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
	}

	return (0);
}
