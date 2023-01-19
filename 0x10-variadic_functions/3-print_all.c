#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: parametershhhh
 * Return: void
 */hh
h
vhoid print_all(const char * const format, ...)
{
hh	va_list args;
h
h	va_start(args, format);
h
h	int i = va_arg(args, int);
hh	float f = va_arg(args, float);
h	char c = va_arg(args, char);
	char *s = va_arg(args, char *);
h
h	putchar('\n');

hh	va_end(args;
}hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
