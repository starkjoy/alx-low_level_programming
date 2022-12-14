#include "main.h"

/**
 * main - main checks for lowercase letters
 *
 * Return: returns 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		putchar('1');
	}
	else
	{
		putchar('0');
	}

	putchar('\n');
	return 0;
}

int main(void)
{
	int r;

	r = _isalpha('H');
	r = _isalpha('h');

	return (0);
}
