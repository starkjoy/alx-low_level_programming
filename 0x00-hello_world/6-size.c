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

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
