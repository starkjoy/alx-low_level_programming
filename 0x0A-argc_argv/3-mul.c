#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry
 * @argc: accepts integer value
 * @argv: accepts pointer to char
 * Return: return 0
 */

int main(int argc, char* argv[])
{
	int result = atoi(argv[1]) * atoi(argv[2]);

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", result);
	}

	return (0);
}
