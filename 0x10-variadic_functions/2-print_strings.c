#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints numbers
 * @n: parameter count
 * @separator: separates string
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *current;

		current = va_arg(args, char*);

		if (current == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current);
		}
		if (separator == NULL)
			continue;
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');

	va_end(args);
}
