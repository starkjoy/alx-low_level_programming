#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @n: parameter count
 * @separator: separates string
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
	{
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));
		printf("%s", separator);
	}
	putchar('\n');

	va_end(args);
}
