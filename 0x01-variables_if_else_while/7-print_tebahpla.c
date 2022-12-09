#include <stdio.h>

/**
 * main - main prints in lower case in reverse
 *
 * Return: return 0
 */

int main(void)
{
	int base;

	for (base = 'z';  base >= 'a'; base--)
	{
		putchar(base);
		if (base == 'a')
		{
			putchar('\n');
		}
	}

	return (0);
}
