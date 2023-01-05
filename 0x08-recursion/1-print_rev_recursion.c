#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * Description: prints string in reverse
 * @s: accepts a char array
 * Return: returns nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	else
	{
		_print_rev_recursion(s + 1);

		_putchar(*s);
	}
}
