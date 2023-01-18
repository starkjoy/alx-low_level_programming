#include <stdio.h>
#include <string.h>
#include <function_pointers.h>

/**
 * print_name - prints a name
 * @name: accepts string
 * @f: accepts function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	int i;

	void namprint(char *)
	{
		for (i = 0; i < strlen(name); i++)
		{
			_putchar(name[i]);
		}
		_putchar("\n");
	}
	namprint = f;
	namprint(name);
}
