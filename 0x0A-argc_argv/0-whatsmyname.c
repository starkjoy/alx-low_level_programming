#include <stdio.h>

/**
 * main - program entry
 * @argc: accepts integer value
 * @argv: accepts pointer to char
 * Return: return 0
 */

int main(int argc, char* argv)
{
	char name[] = argv[0];

	printf("%s\n", name);

	return (0);
}
