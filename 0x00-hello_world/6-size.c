#include <stdio.h>

/**
 * main - main prints sizes of data types
 *
 * Return: returns 0
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of char: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of long int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
