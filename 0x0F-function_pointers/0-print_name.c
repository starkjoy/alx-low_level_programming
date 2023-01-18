#include <stdio.h>

/**
 * print_name - prints a name
 * @name: accepts string
 * @f: accepts function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
