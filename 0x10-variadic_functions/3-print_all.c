#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: parameters
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *sep = "";

	va_start(args, format);

	while (format == NULL)
	{
		printf("\n");
		return;
	}

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, (char) va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, (float) va_arg(args, double));
				break;
			case 's':
				if (va_arg(args, char *) != NULL)
				{
					printf("%s%s", sep, va_arg(args, char *));
					break;
				}
				printf("(nil)");
				break;
		}
		sep = ",";
		i++;
	}

	putchar('\n');
	va_end(args);
}
