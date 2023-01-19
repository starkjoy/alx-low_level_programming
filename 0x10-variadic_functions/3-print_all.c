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
				printf("%c", (char) va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				break;
			case 's':
				if (va_arg(args, char *) != NULL)
				{
					printf("%s", va_arg(args, char *));
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}

	putchar('\n');
	va_end(args);
}
