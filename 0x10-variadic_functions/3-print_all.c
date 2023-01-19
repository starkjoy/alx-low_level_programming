#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints data type set
 * @format: type arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *temp;
	int i = 0;
	const char * const f = format;

	va_start(args, f);

	while (f == NULL)
	{
		printf("\n");
		return;
	}
	while (f[i])
	{
		switch (f[i])
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
				temp = va_arg(args, char*);
				if (temp != NULL)
				{
					printf("%s", temp);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((f[i] == 'c' || f[i] == 'i' || f[i] == 'f' || f[i] == 's') && f[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
