#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - program entry
 * @argc: args count
 * @argv: array of args
 * Return: integer
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[2]) < 0)
	{
		printf("Error\n");
		exit(2);
	}


	return (0);
}
