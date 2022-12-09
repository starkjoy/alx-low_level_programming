#include <stdio.h>

/**
 * main - main prints in lower and upper case
 *
 * Return: return 0
 */

int main(void)
{
	int base;

	for (base = 0;  base < 10 ; base++)
	{
		unsigned char new = (char) base;
		putchar(new);
		putchar('\n');
	}
	return (0);
}
